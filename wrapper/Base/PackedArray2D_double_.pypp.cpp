// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "PackedArray2D_double_.pypp.hpp"

namespace bp = boost::python;

#include "packedarrays.h"

#include "packedarrays.h"

SireBase::PackedArray2D<double> __copy__(const SireBase::PackedArray2D<double> &other){ return SireBase::PackedArray2D<double>(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/len.hpp"

void register_PackedArray2D_double__class(){

    { //::SireBase::PackedArray2D< double >
        typedef bp::class_< SireBase::PackedArray2D< double > > PackedArray2D_double__exposer_t;
        PackedArray2D_double__exposer_t PackedArray2D_double__exposer = PackedArray2D_double__exposer_t( "PackedArray2D_double_", bp::init< >() );
        bp::scope PackedArray2D_double__scope( PackedArray2D_double__exposer );
        PackedArray2D_double__exposer.def( bp::init< SireBase::detail::PackedArray2D_Array< double > const & >(( bp::arg("array") )) );
        PackedArray2D_double__exposer.def( bp::init< QVector< SireBase::detail::PackedArray2D_Array< double > > const & >(( bp::arg("arrays") )) );
        PackedArray2D_double__exposer.def( bp::init< QVector< double > const & >(( bp::arg("values") )) );
        PackedArray2D_double__exposer.def( bp::init< QVector< QVector< double > > const & >(( bp::arg("values") )) );
        PackedArray2D_double__exposer.def( bp::init< SireBase::PackedArray2D< double > const &, SireBase::PackedArray2D< double > const & >(( bp::arg("array0"), bp::arg("array1") )) );
        PackedArray2D_double__exposer.def( bp::init< SireBase::PackedArray2D< double > const & >(( bp::arg("other") )) );
        { //::SireBase::PackedArray2D< double >::append
        
            typedef SireBase::PackedArray2D< double > exported_class_t;
            typedef void ( ::SireBase::PackedArray2D< double >::*append_function_type)( ::SireBase::detail::PackedArray2D_Array< double > const & ) ;
            append_function_type append_function_value( &::SireBase::PackedArray2D< double >::append );
            
            PackedArray2D_double__exposer.def( 
                "append"
                , append_function_value
                , ( bp::arg("array") ) );
        
        }
        { //::SireBase::PackedArray2D< double >::append
        
            typedef SireBase::PackedArray2D< double > exported_class_t;
            typedef void ( ::SireBase::PackedArray2D< double >::*append_function_type)( ::SireBase::PackedArray2D< double > const & ) ;
            append_function_type append_function_value( &::SireBase::PackedArray2D< double >::append );
            
            PackedArray2D_double__exposer.def( 
                "append"
                , append_function_value
                , ( bp::arg("arrays") ) );
        
        }
        { //::SireBase::PackedArray2D< double >::append
        
            typedef SireBase::PackedArray2D< double > exported_class_t;
            typedef void ( ::SireBase::PackedArray2D< double >::*append_function_type)( ::QVector< double > const & ) ;
            append_function_type append_function_value( &::SireBase::PackedArray2D< double >::append );
            
            PackedArray2D_double__exposer.def( 
                "append"
                , append_function_value
                , ( bp::arg("array") ) );
        
        }
        { //::SireBase::PackedArray2D< double >::append
        
            typedef SireBase::PackedArray2D< double > exported_class_t;
            typedef void ( ::SireBase::PackedArray2D< double >::*append_function_type)( ::QVector< QVector< double > > const & ) ;
            append_function_type append_function_value( &::SireBase::PackedArray2D< double >::append );
            
            PackedArray2D_double__exposer.def( 
                "append"
                , append_function_value
                , ( bp::arg("arrays") ) );
        
        }
        { //::SireBase::PackedArray2D< double >::assertValidIndex
        
            typedef SireBase::PackedArray2D< double > exported_class_t;
            typedef void ( ::SireBase::PackedArray2D< double >::*assertValidIndex_function_type)( ::quint32 ) const;
            assertValidIndex_function_type assertValidIndex_function_value( &::SireBase::PackedArray2D< double >::assertValidIndex );
            
            PackedArray2D_double__exposer.def( 
                "assertValidIndex"
                , assertValidIndex_function_value
                , ( bp::arg("i") ) );
        
        }
        { //::SireBase::PackedArray2D< double >::at
        
            typedef SireBase::PackedArray2D< double > exported_class_t;
            typedef ::SireBase::detail::PackedArray2D_Array< double > const & ( ::SireBase::PackedArray2D< double >::*at_function_type)( ::quint32 ) const;
            at_function_type at_function_value( &::SireBase::PackedArray2D< double >::at );
            
            PackedArray2D_double__exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireBase::PackedArray2D< double >::at
        
            typedef SireBase::PackedArray2D< double > exported_class_t;
            typedef double const & ( ::SireBase::PackedArray2D< double >::*at_function_type)( ::quint32,::quint32 ) const;
            at_function_type at_function_value( &::SireBase::PackedArray2D< double >::at );
            
            PackedArray2D_double__exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("i"), bp::arg("j") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireBase::PackedArray2D< double >::count
        
            typedef SireBase::PackedArray2D< double > exported_class_t;
            typedef int ( ::SireBase::PackedArray2D< double >::*count_function_type)(  ) const;
            count_function_type count_function_value( &::SireBase::PackedArray2D< double >::count );
            
            PackedArray2D_double__exposer.def( 
                "count"
                , count_function_value );
        
        }
        { //::SireBase::PackedArray2D< double >::fromVariant
        
            typedef SireBase::PackedArray2D< double > exported_class_t;
            typedef ::SireBase::PackedArray2D< double > ( *fromVariant_function_type )( ::SireBase::PackedArray2D< QVariant > const & );
            fromVariant_function_type fromVariant_function_value( &::SireBase::PackedArray2D< double >::fromVariant );
            
            PackedArray2D_double__exposer.def( 
                "fromVariant"
                , fromVariant_function_value
                , ( bp::arg("variant") ) );
        
        }
        { //::SireBase::PackedArray2D< double >::isEmpty
        
            typedef SireBase::PackedArray2D< double > exported_class_t;
            typedef bool ( ::SireBase::PackedArray2D< double >::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireBase::PackedArray2D< double >::isEmpty );
            
            PackedArray2D_double__exposer.def( 
                "isEmpty"
                , isEmpty_function_value );
        
        }
        { //::SireBase::PackedArray2D< double >::nArrays
        
            typedef SireBase::PackedArray2D< double > exported_class_t;
            typedef int ( ::SireBase::PackedArray2D< double >::*nArrays_function_type)(  ) const;
            nArrays_function_type nArrays_function_value( &::SireBase::PackedArray2D< double >::nArrays );
            
            PackedArray2D_double__exposer.def( 
                "nArrays"
                , nArrays_function_value );
        
        }
        { //::SireBase::PackedArray2D< double >::nValues
        
            typedef SireBase::PackedArray2D< double > exported_class_t;
            typedef int ( ::SireBase::PackedArray2D< double >::*nValues_function_type)(  ) const;
            nValues_function_type nValues_function_value( &::SireBase::PackedArray2D< double >::nValues );
            
            PackedArray2D_double__exposer.def( 
                "nValues"
                , nValues_function_value );
        
        }
        { //::SireBase::PackedArray2D< double >::nValues
        
            typedef SireBase::PackedArray2D< double > exported_class_t;
            typedef int ( ::SireBase::PackedArray2D< double >::*nValues_function_type)( ::quint32 ) const;
            nValues_function_type nValues_function_value( &::SireBase::PackedArray2D< double >::nValues );
            
            PackedArray2D_double__exposer.def( 
                "nValues"
                , nValues_function_value
                , ( bp::arg("i") ) );
        
        }
        PackedArray2D_double__exposer.def( bp::self != bp::self );
        { //::SireBase::PackedArray2D< double >::operator()
        
            typedef SireBase::PackedArray2D< double > exported_class_t;
            typedef double const & ( ::SireBase::PackedArray2D< double >::*__call___function_type)( ::quint32,::quint32 ) const;
            __call___function_type __call___function_value( &::SireBase::PackedArray2D< double >::operator() );
            
            PackedArray2D_double__exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("i"), bp::arg("j") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireBase::PackedArray2D< double >::operator=
        
            typedef SireBase::PackedArray2D< double > exported_class_t;
            typedef ::SireBase::PackedArray2D< double > & ( ::SireBase::PackedArray2D< double >::*assign_function_type)( ::SireBase::PackedArray2D< double > const & ) ;
            assign_function_type assign_function_value( &::SireBase::PackedArray2D< double >::operator= );
            
            PackedArray2D_double__exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        PackedArray2D_double__exposer.def( bp::self == bp::self );
        { //::SireBase::PackedArray2D< double >::operator[]
        
            typedef SireBase::PackedArray2D< double > exported_class_t;
            typedef ::SireBase::detail::PackedArray2D_Array< double > const & ( ::SireBase::PackedArray2D< double >::*__getitem___function_type)( ::quint32 ) const;
            __getitem___function_type __getitem___function_value( &::SireBase::PackedArray2D< double >::operator[] );
            
            PackedArray2D_double__exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireBase::PackedArray2D< double >::remove
        
            typedef SireBase::PackedArray2D< double > exported_class_t;
            typedef void ( ::SireBase::PackedArray2D< double >::*remove_function_type)( ::quint32 ) ;
            remove_function_type remove_function_value( &::SireBase::PackedArray2D< double >::remove );
            
            PackedArray2D_double__exposer.def( 
                "remove"
                , remove_function_value
                , ( bp::arg("i") ) );
        
        }
        { //::SireBase::PackedArray2D< double >::removeAll
        
            typedef SireBase::PackedArray2D< double > exported_class_t;
            typedef void ( ::SireBase::PackedArray2D< double >::*removeAll_function_type)( ::QVarLengthArray< int, 256 > const & ) ;
            removeAll_function_type removeAll_function_value( &::SireBase::PackedArray2D< double >::removeAll );
            
            PackedArray2D_double__exposer.def( 
                "removeAll"
                , removeAll_function_value
                , ( bp::arg("idxs") ) );
        
        }
        { //::SireBase::PackedArray2D< double >::size
        
            typedef SireBase::PackedArray2D< double > exported_class_t;
            typedef int ( ::SireBase::PackedArray2D< double >::*size_function_type)(  ) const;
            size_function_type size_function_value( &::SireBase::PackedArray2D< double >::size );
            
            PackedArray2D_double__exposer.def( 
                "size"
                , size_function_value );
        
        }
        { //::SireBase::PackedArray2D< double >::toQVector
        
            typedef SireBase::PackedArray2D< double > exported_class_t;
            typedef ::QVector< double > ( ::SireBase::PackedArray2D< double >::*toQVector_function_type)(  ) const;
            toQVector_function_type toQVector_function_value( &::SireBase::PackedArray2D< double >::toQVector );
            
            PackedArray2D_double__exposer.def( 
                "toQVector"
                , toQVector_function_value );
        
        }
        { //::SireBase::PackedArray2D< double >::toQVectorVector
        
            typedef SireBase::PackedArray2D< double > exported_class_t;
            typedef ::QVector< QVector< double > > ( ::SireBase::PackedArray2D< double >::*toQVectorVector_function_type)(  ) const;
            toQVectorVector_function_type toQVectorVector_function_value( &::SireBase::PackedArray2D< double >::toQVectorVector );
            
            PackedArray2D_double__exposer.def( 
                "toQVectorVector"
                , toQVectorVector_function_value );
        
        }
        { //::SireBase::PackedArray2D< double >::toString
        
            typedef SireBase::PackedArray2D< double > exported_class_t;
            typedef ::QString ( ::SireBase::PackedArray2D< double >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireBase::PackedArray2D< double >::toString );
            
            PackedArray2D_double__exposer.def( 
                "toString"
                , toString_function_value );
        
        }
        { //::SireBase::PackedArray2D< double >::toVariant
        
            typedef SireBase::PackedArray2D< double > exported_class_t;
            typedef ::SireBase::PackedArray2D< QVariant > ( ::SireBase::PackedArray2D< double >::*toVariant_function_type)(  ) const;
            toVariant_function_type toVariant_function_value( &::SireBase::PackedArray2D< double >::toVariant );
            
            PackedArray2D_double__exposer.def( 
                "toVariant"
                , toVariant_function_value );
        
        }
        { //::SireBase::PackedArray2D< double >::update
        
            typedef SireBase::PackedArray2D< double > exported_class_t;
            typedef void ( ::SireBase::PackedArray2D< double >::*update_function_type)( ::quint32,::SireBase::detail::PackedArray2D_Array< double > const & ) ;
            update_function_type update_function_value( &::SireBase::PackedArray2D< double >::update );
            
            PackedArray2D_double__exposer.def( 
                "update"
                , update_function_value
                , ( bp::arg("i"), bp::arg("array") ) );
        
        }
        { //::SireBase::PackedArray2D< double >::update
        
            typedef SireBase::PackedArray2D< double > exported_class_t;
            typedef void ( ::SireBase::PackedArray2D< double >::*update_function_type)( ::quint32,::QVector< double > const & ) ;
            update_function_type update_function_value( &::SireBase::PackedArray2D< double >::update );
            
            PackedArray2D_double__exposer.def( 
                "update"
                , update_function_value
                , ( bp::arg("i"), bp::arg("array") ) );
        
        }
        { //::SireBase::PackedArray2D< double >::updateAll
        
            typedef SireBase::PackedArray2D< double > exported_class_t;
            typedef void ( ::SireBase::PackedArray2D< double >::*updateAll_function_type)( ::QVarLengthArray< int, 256 > const &,::SireBase::PackedArray2D< double > const & ) ;
            updateAll_function_type updateAll_function_value( &::SireBase::PackedArray2D< double >::updateAll );
            
            PackedArray2D_double__exposer.def( 
                "updateAll"
                , updateAll_function_value
                , ( bp::arg("idxs"), bp::arg("arrays") ) );
        
        }
        PackedArray2D_double__exposer.staticmethod( "fromVariant" );
        PackedArray2D_double__exposer.def( "__copy__", &__copy__);
        PackedArray2D_double__exposer.def( "__deepcopy__", &__copy__);
        PackedArray2D_double__exposer.def( "clone", &__copy__);
        PackedArray2D_double__exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireBase::PackedArray2D<double> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        PackedArray2D_double__exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireBase::PackedArray2D<double> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        PackedArray2D_double__exposer.def( "__str__", &__str__< ::SireBase::PackedArray2D<double> > );
        PackedArray2D_double__exposer.def( "__repr__", &__str__< ::SireBase::PackedArray2D<double> > );
        PackedArray2D_double__exposer.def( "__len__", &__len_size< ::SireBase::PackedArray2D<double> > );
    }

}
