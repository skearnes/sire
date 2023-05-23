// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Matrix.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireMaths/errors.h"

#include "SireStream/datastream.h"

#include "maths.h"

#include "matrix.h"

#include "nmatrix.h"

#include "nvector.h"

#include "vector.h"

#include <QDebug>

#include <QString>

#include <boost/scoped_array.hpp>

#include <gsl/gsl_blas.h>

#include <gsl/gsl_eigen.h>

#include <gsl/gsl_errno.h>

#include <gsl/gsl_linalg.h>

#include <gsl/gsl_matrix.h>

#include <gsl/gsl_vector.h>

#include "matrix.h"

SireMaths::Matrix __copy__(const SireMaths::Matrix &other){ return SireMaths::Matrix(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_Matrix_class(){

    { //::SireMaths::Matrix
        typedef bp::class_< SireMaths::Matrix > Matrix_exposer_t;
        Matrix_exposer_t Matrix_exposer = Matrix_exposer_t( "Matrix", "\nThis class represents a 3x3 square matrix, used to represent 3D transformations.\n\nAuthor: Christopher Woods\n", bp::init< >("Construct a default Matrix (identity matrix)") );
        bp::scope Matrix_scope( Matrix_exposer );
        Matrix_exposer.def( bp::init< double >(( bp::arg("diagonal_value") ), "Construct a matrix whose diagonal elements equal diagonal_value\nand whose off-diagonal elements equal zero") );
        Matrix_exposer.def( bp::init< double, double, double, double, double, double, double, double, double >(( bp::arg("xx"), bp::arg("xy"), bp::arg("xz"), bp::arg("yx"), bp::arg("yy"), bp::arg("yz"), bp::arg("zx"), bp::arg("zy"), bp::arg("zz") ), "Construct a Matrix. Elements listed as row 1, then\nrow 2, then row 3.") );
        Matrix_exposer.def( bp::init< SireMaths::Vector const &, SireMaths::Vector const &, SireMaths::Vector const & >(( bp::arg("r1"), bp::arg("r2"), bp::arg("r3") ), "Construct a matrix from three vectors - each vector is a row") );
        Matrix_exposer.def( bp::init< boost::tuples::tuple< SireMaths::Vector, SireMaths::Vector, SireMaths::Vector, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type > const & >(( bp::arg("rows") ), "Construct a matrix from a tuple of three vectors - each\nvector is a row") );
        Matrix_exposer.def( bp::init< SireMaths::NMatrix const & >(( bp::arg("m") ), "Construct from an NMatrix") );
        Matrix_exposer.def( bp::init< gsl_matrix const * >(( bp::arg("m") ), "Construct from a GSL matrix. This must obviously be a 3x3 matrix") );
        Matrix_exposer.def( bp::init< SireMaths::Matrix const & >(( bp::arg("m") ), "Copy constructor") );
        { //::SireMaths::Matrix::at
        
            typedef double ( ::SireMaths::Matrix::*at_function_type)( int,int ) const;
            at_function_type at_function_value( &::SireMaths::Matrix::at );
            
            Matrix_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("i"), bp::arg("j") )
                , bp::release_gil_policy()
                , "Return the element at index i,j" );
        
        }
        { //::SireMaths::Matrix::checkedOffset
        
            typedef int ( ::SireMaths::Matrix::*checkedOffset_function_type)( int,int ) const;
            checkedOffset_function_type checkedOffset_function_value( &::SireMaths::Matrix::checkedOffset );
            
            Matrix_exposer.def( 
                "checkedOffset"
                , checkedOffset_function_value
                , ( bp::arg("i"), bp::arg("j") )
                , bp::release_gil_policy()
                , "Return the offset into the array of the value at index [i,j]\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMaths::Matrix::column0
        
            typedef ::SireMaths::Vector ( ::SireMaths::Matrix::*column0_function_type)(  ) const;
            column0_function_type column0_function_value( &::SireMaths::Matrix::column0 );
            
            Matrix_exposer.def( 
                "column0"
                , column0_function_value
                , bp::release_gil_policy()
                , "Return each column" );
        
        }
        { //::SireMaths::Matrix::column1
        
            typedef ::SireMaths::Vector ( ::SireMaths::Matrix::*column1_function_type)(  ) const;
            column1_function_type column1_function_value( &::SireMaths::Matrix::column1 );
            
            Matrix_exposer.def( 
                "column1"
                , column1_function_value
                , bp::release_gil_policy()
                , "Return each column" );
        
        }
        { //::SireMaths::Matrix::column2
        
            typedef ::SireMaths::Vector ( ::SireMaths::Matrix::*column2_function_type)(  ) const;
            column2_function_type column2_function_value( &::SireMaths::Matrix::column2 );
            
            Matrix_exposer.def( 
                "column2"
                , column2_function_value
                , bp::release_gil_policy()
                , "Return each column" );
        
        }
        { //::SireMaths::Matrix::covariance
        
            typedef ::SireMaths::Matrix ( *covariance_function_type )( ::QVector< SireMaths::Vector > const &,::QVector< SireMaths::Vector > const &,int );
            covariance_function_type covariance_function_value( &::SireMaths::Matrix::covariance );
            
            Matrix_exposer.def( 
                "covariance"
                , covariance_function_value
                , ( bp::arg("p"), bp::arg("q"), bp::arg("n")=(int)(-1) )
                , "Return the covariance matrix of the passed arrays of points. This\nmatches point p[i] against point q[i], and only calculates up to either\nthe specified number of points, if n > 0, or to min(len(p),len(q))" );
        
        }
        { //::SireMaths::Matrix::determinant
        
            typedef double ( ::SireMaths::Matrix::*determinant_function_type)(  ) const;
            determinant_function_type determinant_function_value( &::SireMaths::Matrix::determinant );
            
            Matrix_exposer.def( 
                "determinant"
                , determinant_function_value
                , bp::release_gil_policy()
                , "Return the determinant of the matrix" );
        
        }
        { //::SireMaths::Matrix::diagonal
        
            typedef ::SireMaths::Vector ( ::SireMaths::Matrix::*diagonal_function_type)(  ) const;
            diagonal_function_type diagonal_function_value( &::SireMaths::Matrix::diagonal );
            
            Matrix_exposer.def( 
                "diagonal"
                , diagonal_function_value
                , bp::release_gil_policy()
                , "Return the diagonal of this matrix" );
        
        }
        { //::SireMaths::Matrix::diagonalise
        
            typedef ::boost::tuples::tuple< SireMaths::Vector, SireMaths::Matrix, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type > ( ::SireMaths::Matrix::*diagonalise_function_type)(  ) const;
            diagonalise_function_type diagonalise_function_value( &::SireMaths::Matrix::diagonalise );
            
            Matrix_exposer.def( 
                "diagonalise"
                , diagonalise_function_value
                , bp::release_gil_policy()
                , "Return the eigenvectors and eigenvalues of this matrix" );
        
        }
        { //::SireMaths::Matrix::enforceSymmetric
        
            typedef void ( ::SireMaths::Matrix::*enforceSymmetric_function_type)(  ) ;
            enforceSymmetric_function_type enforceSymmetric_function_value( &::SireMaths::Matrix::enforceSymmetric );
            
            Matrix_exposer.def( 
                "enforceSymmetric"
                , enforceSymmetric_function_value
                , bp::release_gil_policy()
                , "Ensure that this matrix is symmetric - this is done by copying the upper-right\ndiagonal to the lower-left diagonal. Note that you should only really use this\nfunction on matricies that you know are symmetric, but may have lost some of\ntheir symmetry due to numerical rounding error" );
        
        }
        { //::SireMaths::Matrix::getPrincipalAxes
        
            typedef ::SireMaths::Matrix ( ::SireMaths::Matrix::*getPrincipalAxes_function_type)(  ) const;
            getPrincipalAxes_function_type getPrincipalAxes_function_value( &::SireMaths::Matrix::getPrincipalAxes );
            
            Matrix_exposer.def( 
                "getPrincipalAxes"
                , getPrincipalAxes_function_value
                , bp::release_gil_policy()
                , "Obtain the principal axes of this matrix. This can only be performed if this\nmatrix is symmetric. You should only call this function for matricies that\nyou know are symmetric, as this function will assume that the matrix is\nsymmetric, and will thus only use the upper-right diagonal of values.\nThe returned principal axes will be sorted from the highest eigenvalue to\nthe lowest." );
        
        }
        { //::SireMaths::Matrix::identity
        
            typedef ::SireMaths::Matrix ( *identity_function_type )(  );
            identity_function_type identity_function_value( &::SireMaths::Matrix::identity );
            
            Matrix_exposer.def( 
                "identity"
                , identity_function_value
                , bp::release_gil_policy()
                , "Return the identity matrix" );
        
        }
        { //::SireMaths::Matrix::inverse
        
            typedef ::SireMaths::Matrix ( ::SireMaths::Matrix::*inverse_function_type)(  ) const;
            inverse_function_type inverse_function_value( &::SireMaths::Matrix::inverse );
            
            Matrix_exposer.def( 
                "inverse"
                , inverse_function_value
                , bp::release_gil_policy()
                , "Return the inverse of this matrix. Throws a math_error if this\nmatrix cannot be inverted." );
        
        }
        { //::SireMaths::Matrix::isDiagonal
        
            typedef bool ( ::SireMaths::Matrix::*isDiagonal_function_type)(  ) const;
            isDiagonal_function_type isDiagonal_function_value( &::SireMaths::Matrix::isDiagonal );
            
            Matrix_exposer.def( 
                "isDiagonal"
                , isDiagonal_function_value
                , bp::release_gil_policy()
                , "Return whether or not this is a diagonal matrix" );
        
        }
        { //::SireMaths::Matrix::isIdentity
        
            typedef bool ( ::SireMaths::Matrix::*isIdentity_function_type)(  ) const;
            isIdentity_function_type isIdentity_function_value( &::SireMaths::Matrix::isIdentity );
            
            Matrix_exposer.def( 
                "isIdentity"
                , isIdentity_function_value
                , bp::release_gil_policy()
                , "Return whether or not this matrix is equal to the identity matrix" );
        
        }
        { //::SireMaths::Matrix::isSymmetric
        
            typedef bool ( ::SireMaths::Matrix::*isSymmetric_function_type)(  ) const;
            isSymmetric_function_type isSymmetric_function_value( &::SireMaths::Matrix::isSymmetric );
            
            Matrix_exposer.def( 
                "isSymmetric"
                , isSymmetric_function_value
                , bp::release_gil_policy()
                , "Return whether or not this is a symmetric matrix" );
        
        }
        { //::SireMaths::Matrix::isZero
        
            typedef bool ( ::SireMaths::Matrix::*isZero_function_type)(  ) const;
            isZero_function_type isZero_function_value( &::SireMaths::Matrix::isZero );
            
            Matrix_exposer.def( 
                "isZero"
                , isZero_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMaths::Matrix::offset
        
            typedef int ( ::SireMaths::Matrix::*offset_function_type)( int,int ) const;
            offset_function_type offset_function_value( &::SireMaths::Matrix::offset );
            
            Matrix_exposer.def( 
                "offset"
                , offset_function_value
                , ( bp::arg("i"), bp::arg("j") )
                , bp::release_gil_policy()
                , "" );
        
        }
        Matrix_exposer.def( bp::self != bp::self );
        { //::SireMaths::Matrix::operator()
        
            typedef double const & ( ::SireMaths::Matrix::*__call___function_type)( int,int ) const;
            __call___function_type __call___function_value( &::SireMaths::Matrix::operator() );
            
            Matrix_exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("i"), bp::arg("j") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMaths::Matrix::operator=
        
            typedef ::SireMaths::Matrix & ( ::SireMaths::Matrix::*assign_function_type)( ::SireMaths::Matrix const & ) ;
            assign_function_type assign_function_value( &::SireMaths::Matrix::operator= );
            
            Matrix_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        Matrix_exposer.def( bp::self == bp::self );
        { //::SireMaths::Matrix::row0
        
            typedef ::SireMaths::Vector ( ::SireMaths::Matrix::*row0_function_type)(  ) const;
            row0_function_type row0_function_value( &::SireMaths::Matrix::row0 );
            
            Matrix_exposer.def( 
                "row0"
                , row0_function_value
                , bp::release_gil_policy()
                , "Return each row" );
        
        }
        { //::SireMaths::Matrix::row1
        
            typedef ::SireMaths::Vector ( ::SireMaths::Matrix::*row1_function_type)(  ) const;
            row1_function_type row1_function_value( &::SireMaths::Matrix::row1 );
            
            Matrix_exposer.def( 
                "row1"
                , row1_function_value
                , bp::release_gil_policy()
                , "Return each row" );
        
        }
        { //::SireMaths::Matrix::row2
        
            typedef ::SireMaths::Vector ( ::SireMaths::Matrix::*row2_function_type)(  ) const;
            row2_function_type row2_function_value( &::SireMaths::Matrix::row2 );
            
            Matrix_exposer.def( 
                "row2"
                , row2_function_value
                , bp::release_gil_policy()
                , "Return each row" );
        
        }
        { //::SireMaths::Matrix::setToIdentity
        
            typedef void ( ::SireMaths::Matrix::*setToIdentity_function_type)(  ) ;
            setToIdentity_function_type setToIdentity_function_value( &::SireMaths::Matrix::setToIdentity );
            
            Matrix_exposer.def( 
                "setToIdentity"
                , setToIdentity_function_value
                , bp::release_gil_policy()
                , "Set the matrix to identity" );
        
        }
        { //::SireMaths::Matrix::singleValueDecomposition
        
            typedef ::boost::tuples::tuple< SireMaths::Matrix, SireMaths::Matrix, SireMaths::Matrix, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type > ( ::SireMaths::Matrix::*singleValueDecomposition_function_type)(  ) const;
            singleValueDecomposition_function_type singleValueDecomposition_function_value( &::SireMaths::Matrix::singleValueDecomposition );
            
            Matrix_exposer.def( 
                "singleValueDecomposition"
                , singleValueDecomposition_function_value
                , bp::release_gil_policy()
                , "Return the single value decomposition of this matrix.\nThis calculates the decomposition of this matrix\ninto U S V^T, returning U, S and V in the tuple\n" );
        
        }
        { //::SireMaths::Matrix::svd
        
            typedef ::boost::tuples::tuple< SireMaths::Matrix, SireMaths::Matrix, SireMaths::Matrix, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type > ( ::SireMaths::Matrix::*svd_function_type)(  ) const;
            svd_function_type svd_function_value( &::SireMaths::Matrix::svd );
            
            Matrix_exposer.def( 
                "svd"
                , svd_function_value
                , bp::release_gil_policy()
                , "Return the single value decomposition of this matrix.\nThis calculates the decomposition of this matrix\ninto U S V^T, returning U, S and V in the tuple\n" );
        
        }
        { //::SireMaths::Matrix::toString
        
            typedef ::QString ( ::SireMaths::Matrix::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMaths::Matrix::toString );
            
            Matrix_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "Return a QString representation of the matrix" );
        
        }
        { //::SireMaths::Matrix::trace
        
            typedef ::SireMaths::Vector ( ::SireMaths::Matrix::*trace_function_type)(  ) const;
            trace_function_type trace_function_value( &::SireMaths::Matrix::trace );
            
            Matrix_exposer.def( 
                "trace"
                , trace_function_value
                , bp::release_gil_policy()
                , "Return the trace of the matrix" );
        
        }
        { //::SireMaths::Matrix::transpose
        
            typedef ::SireMaths::Matrix ( ::SireMaths::Matrix::*transpose_function_type)(  ) const;
            transpose_function_type transpose_function_value( &::SireMaths::Matrix::transpose );
            
            Matrix_exposer.def( 
                "transpose"
                , transpose_function_value
                , bp::release_gil_policy()
                , "Return the transpose of the matrix" );
        
        }
        { //::SireMaths::Matrix::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMaths::Matrix::typeName );
            
            Matrix_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMaths::Matrix::what
        
            typedef char const * ( ::SireMaths::Matrix::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMaths::Matrix::what );
            
            Matrix_exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMaths::Matrix::xx
        
            typedef double ( ::SireMaths::Matrix::*xx_function_type)(  ) const;
            xx_function_type xx_function_value( &::SireMaths::Matrix::xx );
            
            Matrix_exposer.def( 
                "xx"
                , xx_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMaths::Matrix::xy
        
            typedef double ( ::SireMaths::Matrix::*xy_function_type)(  ) const;
            xy_function_type xy_function_value( &::SireMaths::Matrix::xy );
            
            Matrix_exposer.def( 
                "xy"
                , xy_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMaths::Matrix::xz
        
            typedef double ( ::SireMaths::Matrix::*xz_function_type)(  ) const;
            xz_function_type xz_function_value( &::SireMaths::Matrix::xz );
            
            Matrix_exposer.def( 
                "xz"
                , xz_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMaths::Matrix::yx
        
            typedef double ( ::SireMaths::Matrix::*yx_function_type)(  ) const;
            yx_function_type yx_function_value( &::SireMaths::Matrix::yx );
            
            Matrix_exposer.def( 
                "yx"
                , yx_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMaths::Matrix::yy
        
            typedef double ( ::SireMaths::Matrix::*yy_function_type)(  ) const;
            yy_function_type yy_function_value( &::SireMaths::Matrix::yy );
            
            Matrix_exposer.def( 
                "yy"
                , yy_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMaths::Matrix::yz
        
            typedef double ( ::SireMaths::Matrix::*yz_function_type)(  ) const;
            yz_function_type yz_function_value( &::SireMaths::Matrix::yz );
            
            Matrix_exposer.def( 
                "yz"
                , yz_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMaths::Matrix::zero
        
            typedef ::SireMaths::Matrix ( *zero_function_type )(  );
            zero_function_type zero_function_value( &::SireMaths::Matrix::zero );
            
            Matrix_exposer.def( 
                "zero"
                , zero_function_value
                , bp::release_gil_policy()
                , "Return the null matrix" );
        
        }
        { //::SireMaths::Matrix::zx
        
            typedef double ( ::SireMaths::Matrix::*zx_function_type)(  ) const;
            zx_function_type zx_function_value( &::SireMaths::Matrix::zx );
            
            Matrix_exposer.def( 
                "zx"
                , zx_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMaths::Matrix::zy
        
            typedef double ( ::SireMaths::Matrix::*zy_function_type)(  ) const;
            zy_function_type zy_function_value( &::SireMaths::Matrix::zy );
            
            Matrix_exposer.def( 
                "zy"
                , zy_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMaths::Matrix::zz
        
            typedef double ( ::SireMaths::Matrix::*zz_function_type)(  ) const;
            zz_function_type zz_function_value( &::SireMaths::Matrix::zz );
            
            Matrix_exposer.def( 
                "zz"
                , zz_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        Matrix_exposer.staticmethod( "covariance" );
        Matrix_exposer.staticmethod( "identity" );
        Matrix_exposer.staticmethod( "typeName" );
        Matrix_exposer.staticmethod( "zero" );
        Matrix_exposer.def( bp::self * bp::self );
        Matrix_exposer.def( bp::self * bp::other< SireMaths::Vector >() );
        Matrix_exposer.def( bp::self * bp::other< double >() );
        Matrix_exposer.def( bp::other< double >() * bp::self );
        Matrix_exposer.def( bp::self + bp::self );
        Matrix_exposer.def( bp::self - bp::self );
        Matrix_exposer.def( "__copy__", &__copy__);
        Matrix_exposer.def( "__deepcopy__", &__copy__);
        Matrix_exposer.def( "clone", &__copy__);
        Matrix_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMaths::Matrix >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Matrix_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMaths::Matrix >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Matrix_exposer.def_pickle(sire_pickle_suite< ::SireMaths::Matrix >());
        Matrix_exposer.def( "__str__", &__str__< ::SireMaths::Matrix > );
        Matrix_exposer.def( "__repr__", &__str__< ::SireMaths::Matrix > );
    }

}
