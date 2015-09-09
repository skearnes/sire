// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "GeometryComponent.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireSystem/system.h"

#include "SireVol/cartesian.h"

#include "delta.h"

#include "geometrycomponent.h"

#include "geometrycomponent.h"

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_GeometryComponent_class(){

    { //::SireSystem::GeometryComponent
        typedef bp::class_< SireSystem::GeometryComponent, bp::bases< SireSystem::Constraint, SireBase::Property >, boost::noncopyable > GeometryComponent_exposer_t;
        GeometryComponent_exposer_t GeometryComponent_exposer = GeometryComponent_exposer_t( "GeometryComponent", bp::no_init );
        bp::scope GeometryComponent_scope( GeometryComponent_exposer );
        { //::SireSystem::GeometryComponent::component
        
            typedef ::SireCAS::Symbol const & ( ::SireSystem::GeometryComponent::*component_function_type)(  ) const;
            component_function_type component_function_value( &::SireSystem::GeometryComponent::component );
            
            GeometryComponent_exposer.def( 
                "component"
                , component_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireSystem::GeometryComponent::expression
        
            typedef ::SireCAS::Expression const & ( ::SireSystem::GeometryComponent::*expression_function_type)(  ) const;
            expression_function_type expression_function_value( &::SireSystem::GeometryComponent::expression );
            
            GeometryComponent_exposer.def( 
                "expression"
                , expression_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireSystem::GeometryComponent::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireSystem::GeometryComponent::typeName );
            
            GeometryComponent_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        GeometryComponent_exposer.staticmethod( "typeName" );
        GeometryComponent_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireSystem::GeometryComponent >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        GeometryComponent_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireSystem::GeometryComponent >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        GeometryComponent_exposer.def( "__str__", &__str__< ::SireSystem::GeometryComponent > );
        GeometryComponent_exposer.def( "__repr__", &__str__< ::SireSystem::GeometryComponent > );
    }

}
