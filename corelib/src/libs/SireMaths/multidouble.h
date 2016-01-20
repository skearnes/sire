/********************************************\
  *
  *  Sire - Molecular Simulation Framework
  *
  *  Copyright (C) 2013  Christopher Woods
  *
  *  This program is free software; you can redistribute it and/or modify
  *  it under the terms of the GNU General Public License as published by
  *  the Free Software Foundation; either version 2 of the License, or
  *  (at your option) any later version.
  *
  *  This program is distributed in the hope that it will be useful,
  *  but WITHOUT ANY WARRANTY; without even the implied warranty of
  *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  *  GNU General Public License for more details.
  *
  *  You should have received a copy of the GNU General Public License
  *  along with this program; if not, write to the Free Software
  *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
  *
  *  For full details of the license please see the COPYING file
  *  that should have come with this distribution.
  *
  *  You can contact the authors via the developer's mailing list
  *  at http://siremol.org
  *
\*********************************************/

#ifndef SIREMATHS_MULTIDOUBLE_H
#define SIREMATHS_MULTIDOUBLE_H

#include "SireMaths/multifloat.h"

#ifdef SIRE_HAS_CPP_11
    #include <functional>
#endif

SIRE_BEGIN_HEADER

namespace SireMaths
{

/** This class provides a vectorised double. This represents
    two vectors of doubles on the compiled machine, e.g.
    4 doubles if we use SSE2, 8 doubles for AVX. This
    is so that it matches up with MultiFloat, with both
    vectors providing the same number of elements.
    
    @author Christopher Woods
*/
class SIREMATHS_EXPORT MultiDouble
{
public:
    MultiDouble();
    
    MultiDouble(double value);
    
    MultiDouble(const double *array, int size);
    MultiDouble(const QVector<float> &array);
    MultiDouble(const QVector<double> &array);
    
    MultiDouble(const MultiFloat &other);
    
    MultiDouble(const MultiDouble &other);
    
    #ifdef SIRE_HAS_CPP_11
        MultiDouble(const std::function<double ()> &func);
    #endif
    
    ~MultiDouble();
    
    bool isAligned() const;
    
    static QVector<MultiDouble> fromArray(const QVector<double> &array);
    static QVector<MultiDouble> fromArray(const QVector<float> &array);
    
    static QVector<MultiDouble> fromArray(const double *array, int size);
    static QVector<MultiDouble> fromArray(const float *array, int size);
    
    static QVector<double> toArray(const QVector<MultiDouble> &array);
    static QVector<double> toDoubleArray(const QVector<MultiDouble> &array);
    
    MultiDouble& operator=(const MultiDouble &other);
    MultiDouble& operator=(const MultiFloat &other);
    MultiDouble& operator=(double value);
    
    bool operator==(const MultiDouble &other) const;
    bool operator!=(const MultiDouble &other) const;
    
    bool operator<(const MultiDouble &other) const;
    bool operator>(const MultiDouble &other) const;
    
    bool operator<=(const MultiDouble &other) const;
    bool operator>=(const MultiDouble &other) const;
    
    MultiDouble compareEqual(const MultiDouble &other) const;
    MultiDouble compareNotEqual(const MultiDouble &other) const;

    MultiDouble compareLess(const MultiDouble &other) const;
    MultiDouble compareGreater(const MultiDouble &other) const;
    
    MultiDouble compareLessEqual(const MultiDouble &other) const;
    MultiDouble compareGreaterEqual(const MultiDouble &other) const;
    
    const char* what() const;
    static const char* typeName();
    
    QString toString() const;
    QString toBinaryString() const;
    
    static int size();
    static int count();
    
    double operator[](int i) const;
    
    void set(int i, double value);
    double get(int i) const;
    
    void quickSet(int i, double value);
    
    double at(int i) const;
    double getitem(int i) const;
    
    MultiDouble operator-() const;
    
    MultiDouble operator+(const MultiDouble &other) const;
    MultiDouble operator-(const MultiDouble &other) const;
    MultiDouble operator*(const MultiDouble &other) const;
    MultiDouble operator/(const MultiDouble &other) const;
    
    MultiDouble& operator+=(const MultiDouble &other);
    MultiDouble& operator-=(const MultiDouble &other);
    MultiDouble& operator*=(const MultiDouble &other);
    MultiDouble& operator/=(const MultiDouble &other);
    
    MultiDouble operator!() const;
    MultiDouble operator&(const MultiDouble &other) const;
    MultiDouble operator|(const MultiDouble &other) const;
    MultiDouble operator^(const MultiDouble &other) const;

    MultiDouble& operator&=(const MultiDouble &other);
    MultiDouble& operator|=(const MultiDouble &other);
    MultiDouble& operator^=(const MultiDouble &other);

    MultiDouble logicalNot() const;
    
    MultiDouble logicalAnd(const MultiDouble &other) const;
    MultiDouble logicalAndNot(const MultiDouble &other) const;
    
    MultiDouble logicalOr(const MultiDouble &other) const;
    MultiDouble logicalXor(const MultiDouble &other) const;
    
    MultiDouble& multiplyAdd(const MultiDouble &val0, const MultiDouble &val1);
    
    MultiDouble max(const MultiDouble &other) const;
    MultiDouble min(const MultiDouble &other) const;
    
    MultiDouble reciprocal() const;
    
    MultiDouble sqrt() const;
    MultiDouble rsqrt() const;
    
    MultiDouble rotate() const;
    
    double sum() const;
    double doubleSum() const;

private:
    /* Give other Multi??? classes access to the raw vector */
    friend class MultiFloat;
    friend class MultiFixed;

    static void assertAligned(const void *ptr, size_t alignment);

    #ifndef SIRE_SKIP_INLINE_FUNCTIONS
        #ifndef MULTIFLOAT_CHECK_ALIGNMENT
            void assertAligned(){}
        #endif

        #ifdef MULTIFLOAT_AVX_IS_AVAILABLE
            _ALIGNED(32) union
            {
                __m256d x[2];
                double a[8];
            } v;
        
            MultiDouble(__m256d avx_val0, __m256d avx_val1)
            {
                v.x[0] = avx_val0;
                v.x[1] = avx_val1;
            }
        
            #ifdef MULTIFLOAT_CHECK_ALIGNMENT
                void assertAligned()
                {
                    if ((quintptr)this % 32 != 0)
                        assertAligned(this, 32);
                }
            #endif
        #else
        #ifdef MULTIFLOAT_SSE_IS_AVAILABLE
            _ALIGNED(16) union
            {
                __m128d x[2];
                double a[4];
            } v;

            MultiDouble(__m128d sse_val0, __m128d sse_val1)
            {
                v.x[0] = sse_val0;
                v.x[1] = sse_val1;
            }

            #ifdef MULTIFLOAT_CHECK_ALIGNMENT
                void assertAligned()
                {
                    if ((quintptr)this % 16 != 0)
                        assertAligned(this, 16);
                }
            #endif
        #else
            _ALIGNED(32) union
            {
                double a[MULTIFLOAT_SIZE];
            } v;
            #define MULTIDOUBLE_BINONE getBinaryOne()

            static double getBinaryOne()
            {
                const quint64 x = 0xFFFFFFFFFFFFFFFFULL;
                return *(reinterpret_cast<const double*>(&x));
            }
        
            #ifdef MULTIFLOAT_CHECK_ALIGNMENT
                void assertAligned()
                {
                    if ((quintptr)this % 32 != 0)
                        assertAligned(this, 32);
                }
            #endif
        #endif
        #endif
    #endif // #ifndef SIRE_SKIP_INLINE_FUNCTIONS
};

#ifndef SIRE_SKIP_INLINE_FUNCTIONS

static const MultiDouble MULTIDOUBLE_ONE(1);

/** Constructor. This creates a MultiDouble with an undefined initial state */
inline
MultiDouble::MultiDouble()
{
    assertAligned();
}

/** Construct a vector with all values equal to 'val' */
inline
MultiDouble::MultiDouble(double val)
{
    assertAligned();

    #ifdef MULTIFLOAT_AVX_IS_AVAILABLE
        v.x[0] = _mm256_set1_pd(val);
        v.x[1] = _mm256_set1_pd(val);
    #else
    #ifdef MULTIFLOAT_SSE_IS_AVAILABLE
        v.x[0] = _mm_set1_pd(val);
        v.x[1] = _mm_set1_pd(val);
    #else
        for (int i=0; i<MULTIFLOAT_SIZE; ++i)
        {
            v.a[i] = val;
        }
    #endif
    #endif
}

/** Construct using the passed function to generate doubles */
#ifdef SIRE_HAS_CPP_11
    inline
    MultiDouble::MultiDouble(const std::function<double ()> &generator)
    {
        assertAligned();

        #ifdef MULTIFLOAT_AVX_IS_AVAILABLE
            v.x[0] = _mm256_set_pd(generator(), generator(), generator(), generator());
            v.x[1] = _mm256_set_pd(generator(), generator(), generator(), generator());
        #else
        #ifdef MULTIFLOAT_SSE_IS_AVAILABLE
            v.x[0] = _mm_set_pd(generator(), generator());
            v.x[1] = _mm_set_pd(generator(), generator());
        #else
            for (int i=0; i<MULTIFLOAT_SIZE; ++i)
            {
                v.a[i] = generator();
            }
        #endif
        #endif
    }
#endif

/** Copy construct from a MultiFloat */
inline
MultiDouble::MultiDouble(const MultiFloat &other)
{
    assertAligned();

    #ifdef MULTIFLOAT_AVX_IS_AVAILABLE
        const __m128 *o = (const __m128*)&(other.v.x);
    
        v.x[0] = _mm256_cvtps_pd( o[0] );
        v.x[1] = _mm256_cvtps_pd( o[1] );
    #else
    #ifdef MULTIFLOAT_SSE_IS_AVAILABLE
        v.x[0] = _mm_cvtps_pd( other.v.x );
        v.x[1] = _mm_cvtps_pd( _mm_movehl_ps(other.v.x,other.v.x) );
    #else
        for (int i=0; i<MULTIFLOAT_SIZE; ++i)
        {
            v.a[i] = other.v.a[i];
        }
    #endif
    #endif
}

/** Copy construct from a MultiDouble */
inline
MultiFloat::MultiFloat(const MultiDouble &other)
{
    assertAligned();

    #ifdef MULTIFLOAT_AVX_IS_AVAILABLE
        __m128 *o = (__m128*)&(v.x);
    
        o[0] = _mm256_cvtpd_ps(other.v.x[0]);
        o[1] = _mm256_cvtpd_ps(other.v.x[1]);
    #else
    #ifdef MULTIFLOAT_SSE_IS_AVAILABLE
        v.x = _mm_movelh_ps( _mm_cvtpd_ps(other.v.x[0]),
                             _mm_cvtpd_ps(other.v.x[1]) );
    #else
        for (int i=0; i<MULTIFLOAT_SIZE; ++i)
        {
            v.a[i] = other.v.a[i];
        }
    #endif
    #endif
}

/** Copy constructor */
inline
MultiDouble::MultiDouble(const MultiDouble &other)
{
    assertAligned();

    #ifdef MULTIFLOAT_AVX_IS_AVAILABLE
        v.x[0] = other.v.x[0];
        v.x[1] = other.v.x[1];
    #else
    #ifdef MULTIFLOAT_SSE_IS_AVAILABLE
        v.x[0] = other.v.x[0];
        v.x[1] = other.v.x[1];
    #else
        for (int i=0; i<MULTIFLOAT_SIZE; ++i)
        {
            v.a[i] = other.v.a[i];
        }
    #endif
    #endif
}

/** Destructor */
inline
MultiDouble::~MultiDouble()
{}

/** Return the ith value in the MultiDouble - note that
    this is a fast function that does no bounds checking */
inline double MultiDouble::operator[](int i) const
{
    return v.a[i];
}

/** Assignment operator */
inline
MultiDouble& MultiDouble::operator=(const MultiDouble &other)
{
    if (this != &other)
    {
        #ifdef MULTIFLOAT_AVX_IS_AVAILABLE
            v.x[0] = other.v.x[0];
            v.x[1] = other.v.x[1];
        #else
        #ifdef MULTIFLOAT_SSE_IS_AVAILABLE
            v.x[0] = other.v.x[0];
            v.x[1] = other.v.x[1];
        #else
            for (int i=0; i<MULTIFLOAT_SIZE; ++i)
            {
                v.a[i] = other.v.a[i];
            }
        #endif
        #endif
    }
    
    return *this;
}

/** Assignment operator */
inline
MultiFloat& MultiFloat::operator=(const MultiDouble &other)
{
    #ifdef MULTIFLOAT_AVX_IS_AVAILABLE
        __m128 *o = (__m128*)&(v.x);
    
        o[0] = _mm256_cvtpd_ps(other.v.x[0]);
        o[1] = _mm256_cvtpd_ps(other.v.x[1]);
    #else
    #ifdef MULTIFLOAT_SSE_IS_AVAILABLE
        v.x = _mm_movelh_ps( _mm_cvtpd_ps(other.v.x[0]),
                             _mm_cvtpd_ps(other.v.x[1]) );
    #else
        for (int i=0; i<MULTIFLOAT_SIZE; ++i)
        {
            v.a[i] = other.v.a[i];
        }
    #endif
    #endif

    return *this;
}

/** Assignment operator */
inline
MultiDouble& MultiDouble::operator=(double value)
{
    #ifdef MULTIFLOAT_AVX_IS_AVAILABLE
        v.x[0] = _mm256_set1_pd(value);
        v.x[1] = _mm256_set1_pd(value);
    #else
    #ifdef MULTIFLOAT_SSE_IS_AVAILABLE
        v.x[0] = _mm_set1_pd(value);
        v.x[1] = _mm_set1_pd(value);
    #else
        for (int i=0; i<MULTIFLOAT_SIZE; ++i)
        {
            v.a[i] = value;
        }
    #endif
    #endif
    
    return *this;
}

/** Assignment operator */
inline
MultiDouble& MultiDouble::operator=(const MultiFloat &other)
{
    #ifdef MULTIFLOAT_AVX_IS_AVAILABLE
        const __m128 *o = (const __m128*)&(other.v.x);
    
        v.x[0] = _mm256_cvtps_pd( o[0] );
        v.x[1] = _mm256_cvtps_pd( o[1] );
    #else
    #ifdef MULTIFLOAT_SSE_IS_AVAILABLE
        v.x[0] = _mm_cvtps_pd( other.v.x );
        v.x[1] = _mm_cvtps_pd( _mm_movehl_ps(other.v.x,other.v.x) );
    #else
        for (int i=0; i<MULTIFLOAT_SIZE; ++i)
        {
            v.a[i] = other.v.a[i];
        }
    #endif
    #endif

    return *this;
}

/** Comparison operator. This will return a MultiDouble with elements
    set to zero for each double that is not equal */
inline
MultiDouble MultiDouble::compareEqual(const MultiDouble &other) const
{
    #ifdef MULTIFLOAT_AVX_IS_AVAILABLE
        return MultiDouble( _mm256_cmp_pd(v.x[0], other.v.x[0], _CMP_EQ_OQ),
                            _mm256_cmp_pd(v.x[1], other.v.x[1], _CMP_EQ_OQ) );
    #else
    #ifdef MULTIFLOAT_SSE_IS_AVAILABLE
        return MultiDouble( _mm_cmpeq_pd(v.x[0], other.v.x[0]),
                            _mm_cmpeq_pd(v.x[1], other.v.x[1]) );
    #else
        MultiDouble ret;

        for (int i=0; i<MULTIFLOAT_SIZE; ++i)
        {
            ret.v.a[i] = (v.a[i] == other.v.a[i]) ? MULTIDOUBLE_BINONE : 0x0;
        }
    
        return ret;
    #endif
    #endif
}

/** Not equals comparison operator */
inline
MultiDouble MultiDouble::compareNotEqual(const MultiDouble &other) const
{
    #ifdef MULTIFLOAT_AVX_IS_AVAILABLE
        return MultiDouble( _mm256_cmp_pd(v.x[0], other.v.x[0], _CMP_NEQ_OQ),
                            _mm256_cmp_pd(v.x[1], other.v.x[1], _CMP_NEQ_OQ) );
    #else
    #ifdef MULTIFLOAT_SSE_IS_AVAILABLE
        return MultiDouble( _mm_cmpneq_pd(v.x[0], other.v.x[0]),
                            _mm_cmpneq_pd(v.x[1], other.v.x[1]) );
    #else
        MultiDouble ret;
    
        for (int i=0; i<MULTIFLOAT_SIZE; ++i)
        {
            ret.v.a[i] = (v.a[i] != other.v.a[i]) ? MULTIDOUBLE_BINONE : 0x0;
        }
    
        return ret;
    #endif
    #endif
}

/** Less than comparison operator */
inline
MultiDouble MultiDouble::compareLess(const MultiDouble &other) const
{
    #ifdef MULTIFLOAT_AVX_IS_AVAILABLE
        return MultiDouble( _mm256_cmp_pd(v.x[0], other.v.x[0], _CMP_LT_OQ),
                            _mm256_cmp_pd(v.x[1], other.v.x[1], _CMP_LT_OQ) );
    #else
    #ifdef MULTIFLOAT_SSE_IS_AVAILABLE
        return MultiDouble( _mm_cmplt_pd(v.x[0], other.v.x[0]),
                            _mm_cmplt_pd(v.x[1], other.v.x[1]) );
    #else
        MultiDouble ret;
    
        for (int i=0; i<MULTIFLOAT_SIZE; ++i)
        {
            ret.v.a[i] = (v.a[i] < other.v.a[i]) ? MULTIDOUBLE_BINONE : 0x0;
        }
    
        return ret;
    #endif
    #endif
}

/** Greater than comparison operator */
inline
MultiDouble MultiDouble::compareGreater(const MultiDouble &other) const
{
    #ifdef MULTIFLOAT_AVX_IS_AVAILABLE
        return MultiDouble( _mm256_cmp_pd(v.x[0], other.v.x[0], _CMP_GT_OQ),
                            _mm256_cmp_pd(v.x[1], other.v.x[1], _CMP_GT_OQ) );
    #else
    #ifdef MULTIFLOAT_SSE_IS_AVAILABLE
        return MultiDouble( _mm_cmpgt_pd(v.x[0], other.v.x[0]),
                            _mm_cmpgt_pd(v.x[1], other.v.x[1]) );
    #else
        MultiDouble ret;
    
        for (int i=0; i<MULTIFLOAT_SIZE; ++i)
        {
            ret.v.a[i] = (v.a[i] > other.v.a[i]) ? MULTIDOUBLE_BINONE : 0x0;
        }
    
        return ret;
    #endif
    #endif
}

/** Less than or equal comparison */
inline
MultiDouble MultiDouble::compareLessEqual(const MultiDouble &other) const
{
    #ifdef MULTIFLOAT_AVX_IS_AVAILABLE
        return MultiDouble( _mm256_cmp_pd(v.x[0], other.v.x[0], _CMP_LE_OQ),
                            _mm256_cmp_pd(v.x[1], other.v.x[1], _CMP_LE_OQ) );
    #else
    #ifdef MULTIFLOAT_SSE_IS_AVAILABLE
        return MultiDouble( _mm_cmple_pd(v.x[0], other.v.x[0]),
                            _mm_cmple_pd(v.x[1], other.v.x[1]) );
    #else
        MultiDouble ret;
    
        for (int i=0; i<MULTIFLOAT_SIZE; ++i)
        {
            ret.v.a[i] = (v.a[i] <= other.v.a[i]) ? MULTIDOUBLE_BINONE : 0x0;
        }
    
        return ret;
    #endif
    #endif
}

/** Greater than or equal comparison */
inline
MultiDouble MultiDouble::compareGreaterEqual(const MultiDouble &other) const
{
    #ifdef MULTIFLOAT_AVX_IS_AVAILABLE
        return MultiDouble( _mm256_cmp_pd(v.x[0], other.v.x[0], _CMP_GE_OQ),
                            _mm256_cmp_pd(v.x[1], other.v.x[1], _CMP_GE_OQ) );
    #else
    #ifdef MULTIFLOAT_SSE_IS_AVAILABLE
        return MultiDouble( _mm_cmpge_pd(v.x[0], other.v.x[0]),
                            _mm_cmpge_pd(v.x[1], other.v.x[1]) );
    #else
        MultiDouble ret;
    
        for (int i=0; i<MULTIFLOAT_SIZE; ++i)
        {
            ret.v.a[i] = (v.a[i] >= other.v.a[i]) ? MULTIDOUBLE_BINONE : 0x0;
        }
    
        return ret;
    #endif
    #endif
}

/** Return the number of values in the vector */
inline
int MultiDouble::size()
{
    return MULTIFLOAT_SIZE;
}

/** Return the number of values in the vector */
inline
int MultiDouble::count()
{
    return MULTIFLOAT_SIZE;
}

/** Addition operator */
inline
MultiDouble MultiDouble::operator+(const MultiDouble &other) const
{
    #ifdef MULTIFLOAT_AVX_IS_AVAILABLE
        return MultiDouble( _mm256_add_pd(v.x[0], other.v.x[0]),
                            _mm256_add_pd(v.x[1], other.v.x[1]) );
    #else
    #ifdef MULTIFLOAT_SSE_IS_AVAILABLE
        return MultiDouble( _mm_add_pd(v.x[0], other.v.x[0]),
                            _mm_add_pd(v.x[1], other.v.x[1]) );
    #else
        MultiDouble ret;
        for (int i=0; i<MULTIFLOAT_SIZE; ++i)
        {
            ret.v.a[i] = v.a[i] + other.v.a[i];
        }
        return ret;
    #endif
    #endif
}

/** Subtraction operator */
inline
MultiDouble MultiDouble::operator-(const MultiDouble &other) const
{
    #ifdef MULTIFLOAT_AVX_IS_AVAILABLE
        return MultiDouble( _mm256_sub_pd(v.x[0], other.v.x[0]),
                            _mm256_sub_pd(v.x[1], other.v.x[1]) );
    #else
    #ifdef MULTIFLOAT_SSE_IS_AVAILABLE
        return MultiDouble( _mm_sub_pd(v.x[0], other.v.x[0]),
                            _mm_sub_pd(v.x[1], other.v.x[1]) );
    #else
        MultiDouble ret;
        for (int i=0; i<MULTIFLOAT_SIZE; ++i)
        {
            ret.v.a[i] = v.a[i] - other.v.a[i];
        }
        return ret;
    #endif
    #endif
}

/** Multiplication operator */
inline
MultiDouble MultiDouble::operator*(const MultiDouble &other) const
{
    #ifdef MULTIFLOAT_AVX_IS_AVAILABLE
        return MultiDouble( _mm256_mul_pd(v.x[0], other.v.x[0]),
                            _mm256_mul_pd(v.x[1], other.v.x[1]) );
    #else
    #ifdef MULTIFLOAT_SSE_IS_AVAILABLE
        return MultiDouble( _mm_mul_pd(v.x[0], other.v.x[0]),
                            _mm_mul_pd(v.x[1], other.v.x[1]) );
    #else
        MultiDouble ret;
        for (int i=0; i<MULTIFLOAT_SIZE; ++i)
        {
            ret.v.a[i] = v.a[i] * other.v.a[i];
        }
        return ret;
    #endif
    #endif
}

/** Division operator */
inline
MultiDouble MultiDouble::operator/(const MultiDouble &other) const
{
    #ifdef MULTIFLOAT_AVX_IS_AVAILABLE
        return MultiDouble( _mm256_div_pd(v.x[0], other.v.x[0]),
                            _mm256_div_pd(v.x[1], other.v.x[1]) );
    #else
    #ifdef MULTIFLOAT_SSE_IS_AVAILABLE
        return MultiDouble( _mm_div_pd(v.x[0], other.v.x[0]),
                            _mm_div_pd(v.x[1], other.v.x[1]) );
    #else
        MultiDouble ret;
        for (int i=0; i<MULTIFLOAT_SIZE; ++i)
        {
            ret.v.a[i] = v.a[i] / other.v.a[i];
        }
        return ret;
    #endif
    #endif
}

/** In-place addition operator */
inline
MultiDouble& MultiDouble::operator+=(const MultiDouble &other)
{
    #ifdef MULTIFLOAT_AVX_IS_AVAILABLE
        v.x[0] = _mm256_add_pd(v.x[0], other.v.x[0]);
        v.x[1] = _mm256_add_pd(v.x[1], other.v.x[1]);
    #else
    #ifdef MULTIFLOAT_SSE_IS_AVAILABLE
        v.x[0] = _mm_add_pd(v.x[0], other.v.x[0]);
        v.x[1] = _mm_add_pd(v.x[1], other.v.x[1]);
    #else
        for (int i=0; i<MULTIFLOAT_SIZE; ++i)
        {
            v.a[i] += other.v.a[i];
        }
    #endif
    #endif

    return *this;
}

/** In-place subtraction operator */
inline
MultiDouble& MultiDouble::operator-=(const MultiDouble &other)
{
    #ifdef MULTIFLOAT_AVX_IS_AVAILABLE
        v.x[0] = _mm256_sub_pd(v.x[0], other.v.x[0]);
        v.x[1] = _mm256_sub_pd(v.x[1], other.v.x[1]);
    #else
    #ifdef MULTIFLOAT_SSE_IS_AVAILABLE
        v.x[0] = _mm_sub_pd(v.x[0], other.v.x[0]);
        v.x[1] = _mm_sub_pd(v.x[1], other.v.x[1]);
    #else
        for (int i=0; i<MULTIFLOAT_SIZE; ++i)
        {
            v.a[i] -= other.v.a[i];
        }
    #endif
    #endif

    return *this;
}

/** In-place multiplication operator */
inline
MultiDouble& MultiDouble::operator*=(const MultiDouble &other)
{
    #ifdef MULTIFLOAT_AVX_IS_AVAILABLE
        v.x[0] = _mm256_mul_pd(v.x[0], other.v.x[0]);
        v.x[1] = _mm256_mul_pd(v.x[1], other.v.x[1]);
    #else
    #ifdef MULTIFLOAT_SSE_IS_AVAILABLE
        v.x[0] = _mm_mul_pd(v.x[0], other.v.x[0]);
        v.x[1] = _mm_mul_pd(v.x[1], other.v.x[1]);
    #else
        for (int i=0; i<MULTIFLOAT_SIZE; ++i)
        {
            v.a[i] *= other.v.a[i];
        }
    #endif
    #endif

    return *this;
}

/** In-place division operator */
inline
MultiDouble& MultiDouble::operator/=(const MultiDouble &other)
{
    #ifdef MULTIFLOAT_AVX_IS_AVAILABLE
        v.x[0] = _mm256_div_pd(v.x[0], other.v.x[0]);
        v.x[1] = _mm256_div_pd(v.x[1], other.v.x[1]);
    #else
    #ifdef MULTIFLOAT_SSE_IS_AVAILABLE
        v.x[0] = _mm_div_pd(v.x[0], other.v.x[0]);
        v.x[1] = _mm_div_pd(v.x[1], other.v.x[1]);
    #else
        for (int i=0; i<MULTIFLOAT_SIZE; ++i)
        {
            v.a[i] /= other.v.a[i];
        }
    #endif
    #endif

    return *this;
}

/** Bitwise logical "and" comparison */
inline
MultiDouble MultiDouble::logicalAnd(const MultiDouble &other) const
{
    #ifdef MULTIFLOAT_AVX_IS_AVAILABLE
        return MultiDouble( _mm256_and_pd(v.x[0], other.v.x[0]),
                            _mm256_and_pd(v.x[1], other.v.x[1]) );
    #else
    #ifdef MULTIFLOAT_SSE_IS_AVAILABLE
        return MultiDouble( _mm_and_pd(v.x[0], other.v.x[0]),
                            _mm_and_pd(v.x[1], other.v.x[1]) );
    #else
        MultiDouble ret;
    
        for (int i=0; i<MULTIFLOAT_SIZE; ++i)
        {
            unsigned char *ret_char_v = reinterpret_cast<unsigned char*>(&(ret.v.a[i]));
            const unsigned char *char_v = reinterpret_cast<const unsigned char*>(&(v.a[i]));
            const unsigned char *other_char_v
                        = reinterpret_cast<const unsigned char*>(&(other.v.a[i]));

            for (unsigned int j=0; j<sizeof(double); ++j)
            {
                ret_char_v[j] = char_v[j] & other_char_v[j];
            }
        }
    
        return ret;
    #endif
    #endif
}

/** Bitwise logical "and not" */
inline
MultiDouble MultiDouble::logicalAndNot(const MultiDouble &other) const
{
    #ifdef MULTIFLOAT_AVX_IS_AVAILABLE
        return MultiDouble( _mm256_andnot_pd(v.x[0], other.v.x[0]),
                            _mm256_andnot_pd(v.x[1], other.v.x[1]) );
    #else
    #ifdef MULTIFLOAT_SSE_IS_AVAILABLE
        return MultiDouble( _mm_andnot_pd(v.x[0], other.v.x[0]),
                            _mm_andnot_pd(v.x[1], other.v.x[1]) );
    #else
        MultiDouble ret;
    
        for (int i=0; i<MULTIFLOAT_SIZE; ++i)
        {
            unsigned char *ret_char_v = reinterpret_cast<unsigned char*>(&(ret.v.a[i]));
            const unsigned char *char_v = reinterpret_cast<const unsigned char*>(&(v.a[i]));
            const unsigned char *other_char_v
                        = reinterpret_cast<const unsigned char*>(&(other.v.a[i]));

            for (unsigned int j=0; j<sizeof(double); ++j)
            {
                ret_char_v[j] = !(char_v[j] & other_char_v[j]);
            }
        }
    
        return ret;
    #endif
    #endif
}

/** Bitwise logical or operator */
inline
MultiDouble MultiDouble::logicalOr(const MultiDouble &other) const
{
    #ifdef MULTIFLOAT_AVX_IS_AVAILABLE
        return MultiDouble( _mm256_or_pd(v.x[0], other.v.x[0]),
                            _mm256_or_pd(v.x[1], other.v.x[1]) );
    #else
    #ifdef MULTIFLOAT_SSE_IS_AVAILABLE
        return MultiDouble( _mm_or_pd(v.x[0], other.v.x[0]),
                            _mm_or_pd(v.x[1], other.v.x[1]) );
    #else
        MultiDouble ret;
    
        for (int i=0; i<MULTIFLOAT_SIZE; ++i)
        {
            unsigned char *ret_char_v = reinterpret_cast<unsigned char*>(&(ret.v.a[i]));
            const unsigned char *char_v = reinterpret_cast<const unsigned char*>(&(v.a[i]));
            const unsigned char *other_char_v
                        = reinterpret_cast<const unsigned char*>(&(other.v.a[i]));

            for (unsigned int j=0; j<sizeof(double); ++j)
            {
                ret_char_v[j] = char_v[j] | other_char_v[j];
            }
        }
    
        return ret;
    #endif
    #endif
}

/** Bitwise logical xor */
inline
MultiDouble MultiDouble::logicalXor(const MultiDouble &other) const
{
    #ifdef MULTIFLOAT_AVX_IS_AVAILABLE
        return MultiDouble( _mm256_xor_pd(v.x[0], other.v.x[0]),
                            _mm256_xor_pd(v.x[1], other.v.x[1]) );
    #else
    #ifdef MULTIFLOAT_SSE_IS_AVAILABLE
        return MultiDouble( _mm_xor_pd(v.x[0], other.v.x[0]),
                            _mm_xor_pd(v.x[1], other.v.x[1]) );
    #else
        MultiDouble ret;
    
        for (int i=0; i<MULTIFLOAT_SIZE; ++i)
        {
            unsigned char *ret_char_v = reinterpret_cast<unsigned char*>(&(ret.v.a[i]));
            const unsigned char *char_v = reinterpret_cast<const unsigned char*>(&(v.a[i]));
            const unsigned char *other_char_v
                        = reinterpret_cast<const unsigned char*>(&(other.v.a[i]));

            for (unsigned int j=0; j<sizeof(double); ++j)
            {
                ret_char_v[j] = char_v[j] ^ other_char_v[j];
            }
        }
    
        return ret;
    #endif
    #endif
}

/** Logical not operator */
inline
MultiDouble MultiDouble::logicalNot() const
{
    MultiDouble ret;

    for (int i=0; i<MULTIFLOAT_SIZE; ++i)
    {
        unsigned char *ret_char_v = reinterpret_cast<unsigned char*>(&(ret.v.a[i]));
        const unsigned char *char_v = reinterpret_cast<const unsigned char*>(&(v.a[i]));

        for (unsigned int j=0; j<sizeof(double); ++j)
        {
            ret_char_v[j] = !char_v[j];
        }
    }

    return ret;
}

/** Logical not operator */
inline
MultiDouble MultiDouble::operator!() const
{
    return this->logicalNot();
}

/** Logical and operator */
inline
MultiDouble MultiDouble::operator&(const MultiDouble &other) const
{
    return this->logicalAnd(other);
}

/** Logical or operator */
inline
MultiDouble MultiDouble::operator|(const MultiDouble &other) const
{
    return this->logicalOr(other);
}

/** Logical xor operator */
inline
MultiDouble MultiDouble::operator^(const MultiDouble &other) const
{
    return this->logicalXor(other);
}

/** In place logical and */
inline
MultiDouble& MultiDouble::operator&=(const MultiDouble &other)
{
    #ifdef MULTIFLOAT_AVX_IS_AVAILABLE
        v.x[0] = _mm256_and_pd(v.x[0], other.v.x[0]);
        v.x[1] = _mm256_and_pd(v.x[1], other.v.x[1]);
    #else
    #ifdef MULTIFLOAT_SSE_IS_AVAILABLE
        v.x[0] = _mm_and_pd(v.x[0], other.v.x[0]);
        v.x[1] = _mm_and_pd(v.x[1], other.v.x[1]);
    #else
        for (int i=0; i<MULTIFLOAT_SIZE; ++i)
        {
            unsigned char *char_v = reinterpret_cast<unsigned char*>(&(v.a[i]));
            const unsigned char *other_char_v
                        = reinterpret_cast<const unsigned char*>(&(other.v.a[i]));

            for (unsigned int j=0; j<sizeof(double); ++j)
            {
                char_v[j] &= other_char_v[j];
            }
        }
    #endif
    #endif

    return *this;
}

/** In-place logical or */
inline
MultiDouble& MultiDouble::operator|=(const MultiDouble &other)
{
    #ifdef MULTIFLOAT_AVX_IS_AVAILABLE
        v.x[0] = _mm256_or_pd(v.x[0], other.v.x[0]);
        v.x[1] = _mm256_or_pd(v.x[1], other.v.x[1]);
    #else
    #ifdef MULTIFLOAT_SSE_IS_AVAILABLE
        v.x[0] = _mm_or_pd(v.x[0], other.v.x[0]);
        v.x[1] = _mm_or_pd(v.x[1], other.v.x[1]);
    #else
        for (int i=0; i<MULTIFLOAT_SIZE; ++i)
        {
            unsigned char *char_v = reinterpret_cast<unsigned char*>(&(v.a[i]));
            const unsigned char *other_char_v
                        = reinterpret_cast<const unsigned char*>(&(other.v.a[i]));

            for (unsigned int j=0; j<sizeof(double); ++j)
            {
                char_v[j] |= other_char_v[j];
            }
        }
    #endif
    #endif

    return *this;
}

/** In-place logical xor */
inline
MultiDouble& MultiDouble::operator^=(const MultiDouble &other)
{
    #ifdef MULTIFLOAT_AVX_IS_AVAILABLE
        v.x[0] = _mm256_xor_pd(v.x[0], other.v.x[0]);
        v.x[1] = _mm256_xor_pd(v.x[1], other.v.x[1]);
    #else
    #ifdef MULTIFLOAT_SSE_IS_AVAILABLE
        v.x[0] = _mm_xor_pd(v.x[0], other.v.x[0]);
        v.x[1] = _mm_xor_pd(v.x[1], other.v.x[1]);
    #else
        for (int i=0; i<MULTIFLOAT_SIZE; ++i)
        {
            unsigned char *char_v = reinterpret_cast<unsigned char*>(&(v.a[i]));
            const unsigned char *other_char_v
                        = reinterpret_cast<const unsigned char*>(&(other.v.a[i]));

            for (unsigned int j=0; j<sizeof(double); ++j)
            {
                char_v[j] ^= other_char_v[j];
            }
        }
    #endif
    #endif

    return *this;
}

/** Multiply val0 and val1 and add it onto this value */
inline
MultiDouble& MultiDouble::multiplyAdd(const MultiDouble &v0, const MultiDouble &v1)
{
    #ifdef MULTIFLOAT_AVX_IS_AVAILABLE
        v.x[0] = _mm256_add_pd(v.x[0], _mm256_mul_pd(v0.v.x[0], v1.v.x[0]));
        v.x[1] = _mm256_add_pd(v.x[1], _mm256_mul_pd(v0.v.x[1], v1.v.x[1]));
    #else
    #ifdef MULTIFLOAT_SSE_IS_AVAILABLE
        v.x[0] = _mm_add_pd(v.x[0], _mm_mul_pd(v0.v.x[0], v1.v.x[0]));
        v.x[1] = _mm_add_pd(v.x[1], _mm_mul_pd(v0.v.x[1], v1.v.x[1]));
    #else
        for (int i=0; i<MULTIFLOAT_SIZE; ++i)
        {
            v.a[i] += v0.v.a[i] * v1.v.a[i];
        }
    #endif
    #endif

    return *this;
}

/** Return the maximum vector between this and other */
inline
MultiDouble MultiDouble::max(const MultiDouble &other) const
{
    #ifdef MULTIFLOAT_AVX_IS_AVAILABLE
        return MultiDouble( _mm256_max_pd(v.x[0], other.v.x[0]),
                            _mm256_max_pd(v.x[1], other.v.x[1]) );
    #else
    #ifdef MULTIFLOAT_SSE_IS_AVAILABLE
        return MultiDouble( _mm_max_pd(v.x[0], other.v.x[0]),
                            _mm_max_pd(v.x[1], other.v.x[1]) );
    #else
        MultiDouble ret;
        for (int i=0; i<MULTIFLOAT_SIZE; ++i)
        {
            ret.v.a[i] = std::max(v.a[i], other.v.a[i]);
        }
        return ret;
    #endif
    #endif
}

/** Return the minimum vector between this and other */
inline
MultiDouble MultiDouble::min(const MultiDouble &other) const
{
    #ifdef MULTIFLOAT_AVX_IS_AVAILABLE
        return MultiDouble( _mm256_min_pd(v.x[0], other.v.x[0]),
                            _mm256_min_pd(v.x[1], other.v.x[1]) );
    #else
    #ifdef MULTIFLOAT_SSE_IS_AVAILABLE
        return MultiDouble( _mm_min_pd(v.x[0], other.v.x[0]),
                            _mm_min_pd(v.x[1], other.v.x[1]) );
    #else
        MultiDouble ret;
        for (int i=0; i<MULTIFLOAT_SIZE; ++i)
        {
            ret.v.a[i] = std::min(v.a[i], other.v.a[i]);
        }
        return ret;
    #endif
    #endif
}

/** Return the reciprocal of this vector */
inline
MultiDouble MultiDouble::reciprocal() const
{
    return MULTIDOUBLE_ONE.operator/(*this);
}

/** Return the square root of this vector */
inline
MultiDouble MultiDouble::sqrt() const
{
    #ifdef MULTIFLOAT_AVX_IS_AVAILABLE
        return MultiDouble( _mm256_sqrt_pd(v.x[0]),
                            _mm256_sqrt_pd(v.x[1]) );
    #else
    #ifdef MULTIFLOAT_SSE_IS_AVAILABLE
        return MultiDouble( _mm_sqrt_pd(v.x[0]),
                            _mm_sqrt_pd(v.x[1]) );
    #else
        MultiDouble ret;
        for (int i=0; i<MULTIFLOAT_SIZE; ++i)
        {
            ret.v.a[i] = std::sqrt(v.a[i]);
        }
        return ret;
    #endif
    #endif
}

/** Return the recipical square root of this vector */
inline
MultiDouble MultiDouble::rsqrt() const
{
    return MULTIDOUBLE_ONE.operator/(this->sqrt());
}

/** Rotate this vector. This moves each element one space to the left, moving the
    first element to the last element */
inline
MultiDouble MultiDouble::rotate() const
{
    MultiDouble ret;
    
    for (int i=1; i<MULTIFLOAT_SIZE; ++i)
    {
        ret.v.a[i-1] = v.a[i];
    }
    
    ret.v.a[MULTIFLOAT_SIZE-1] = v.a[0];

    return ret;
}

/** Return the sum of all elements of this vector */
inline
double MultiDouble::sum() const
{
    #ifdef MULTIFLOAT_AVX_IS_AVAILABLE
        return v.a[0] + v.a[1] + v.a[2] + v.a[3] +
               v.a[4] + v.a[5] + v.a[6] + v.a[7];
    #else
    #ifdef MULTIFLOAT_SSE_IS_AVAILABLE
        return v.a[0] + v.a[1] + v.a[2] + v.a[3];
    #else
        double sum = 0;
        for (int i=0; i<MULTIFLOAT_SIZE; ++i)
        {
            sum += v.a[i];
        }
        return sum;
    #endif
    #endif
}

/** Return the sum of all elements of this vector, using doubles for the sum */
inline
double MultiDouble::doubleSum() const
{
    return this->sum();
}

#endif // #ifndef SIRE_SKIP_INLINE_FUNCTIONS

}

SIRE_EXPOSE_CLASS( SireMaths::MultiDouble )

SIRE_END_HEADER

#endif
