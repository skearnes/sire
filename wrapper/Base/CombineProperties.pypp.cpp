// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "CombineProperties.pypp.hpp"

namespace bp = boost::python;

#include "SireID/index.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "combineproperties.h"

#include "properties.h"

#include "combineproperties.h"

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/len.hpp"

void register_CombineProperties_class(){

    { //::SireBase::CombineProperties
        typedef bp::class_< SireBase::CombineProperties, bp::bases< SireBase::Property >, boost::noncopyable > CombineProperties_exposer_t;
        CombineProperties_exposer_t CombineProperties_exposer = CombineProperties_exposer_t( "CombineProperties", bp::no_init );
        bp::scope CombineProperties_scope( CombineProperties_exposer );
        { //::SireBase::CombineProperties::at
        
            typedef ::SireBase::PropertyName const & ( ::SireBase::CombineProperties::*at_function_type)( int ) const;
            at_function_type at_function_value( &::SireBase::CombineProperties::at );
            
            CombineProperties_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireBase::CombineProperties::combinedProperty
        
            typedef ::SireBase::Property const & ( ::SireBase::CombineProperties::*combinedProperty_function_type)(  ) const;
            combinedProperty_function_type combinedProperty_function_value( &::SireBase::CombineProperties::combinedProperty );
            
            CombineProperties_exposer.def( 
                "combinedProperty"
                , combinedProperty_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireBase::CombineProperties::count
        
            typedef int ( ::SireBase::CombineProperties::*count_function_type)(  ) const;
            count_function_type count_function_value( &::SireBase::CombineProperties::count );
            
            CombineProperties_exposer.def( 
                "count"
                , count_function_value );
        
        }
        { //::SireBase::CombineProperties::isEmpty
        
            typedef bool ( ::SireBase::CombineProperties::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireBase::CombineProperties::isEmpty );
            
            CombineProperties_exposer.def( 
                "isEmpty"
                , isEmpty_function_value );
        
        }
        { //::SireBase::CombineProperties::nSources
        
            typedef int ( ::SireBase::CombineProperties::*nSources_function_type)(  ) const;
            nSources_function_type nSources_function_value( &::SireBase::CombineProperties::nSources );
            
            CombineProperties_exposer.def( 
                "nSources"
                , nSources_function_value );
        
        }
        { //::SireBase::CombineProperties::operator[]
        
            typedef ::SireBase::PropertyName const & ( ::SireBase::CombineProperties::*__getitem___function_type)( int ) const;
            __getitem___function_type __getitem___function_value( &::SireBase::CombineProperties::operator[] );
            
            CombineProperties_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireBase::CombineProperties::size
        
            typedef int ( ::SireBase::CombineProperties::*size_function_type)(  ) const;
            size_function_type size_function_value( &::SireBase::CombineProperties::size );
            
            CombineProperties_exposer.def( 
                "size"
                , size_function_value );
        
        }
        { //::SireBase::CombineProperties::toString
        
            typedef ::QString ( ::SireBase::CombineProperties::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireBase::CombineProperties::toString );
            
            CombineProperties_exposer.def( 
                "toString"
                , toString_function_value );
        
        }
        { //::SireBase::CombineProperties::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireBase::CombineProperties::typeName );
            
            CombineProperties_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        { //::SireBase::CombineProperties::updateFrom
        
            typedef void ( ::SireBase::CombineProperties::*updateFrom_function_type)( ::SireBase::Properties const & ) ;
            updateFrom_function_type updateFrom_function_value( &::SireBase::CombineProperties::updateFrom );
            
            CombineProperties_exposer.def( 
                "updateFrom"
                , updateFrom_function_value
                , ( bp::arg("properties") ) );
        
        }
        CombineProperties_exposer.staticmethod( "typeName" );
        CombineProperties_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireBase::CombineProperties >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CombineProperties_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireBase::CombineProperties >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CombineProperties_exposer.def( "__str__", &__str__< ::SireBase::CombineProperties > );
        CombineProperties_exposer.def( "__repr__", &__str__< ::SireBase::CombineProperties > );
        CombineProperties_exposer.def( "__len__", &__len_size< ::SireBase::CombineProperties > );
    }

}
