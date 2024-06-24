// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "MonitorName.pypp.hpp"

namespace bp = boost::python;

#include "monitorname.h"

#include "monitorname.h"

#include "systemmonitors.h"

#include "monitorname.h"

SireSystem::MonitorName __copy__(const SireSystem::MonitorName &other){ return SireSystem::MonitorName(other); }

#include "Helpers/copy.hpp"

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_MonitorName_class(){

    { //::SireSystem::MonitorName
        typedef bp::class_< SireSystem::MonitorName, bp::bases< SireSystem::MonitorID, SireID::ID, SireID::Name > > MonitorName_exposer_t;
        MonitorName_exposer_t MonitorName_exposer = MonitorName_exposer_t( "MonitorName", "This class holds the name of a simulation system\n\nAuthor: Christopher Woods\n", bp::init< >("") );
        bp::scope MonitorName_scope( MonitorName_exposer );
        MonitorName_exposer.def( bp::init< QString const & >(( bp::arg("name") ), "") );
        MonitorName_exposer.def( bp::init< SireSystem::MonitorName const & >(( bp::arg("other") ), "") );
        { //::SireSystem::MonitorName::hash
        
            typedef ::uint ( ::SireSystem::MonitorName::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireSystem::MonitorName::hash );
            
            MonitorName_exposer.def( 
                "hash"
                , hash_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireSystem::MonitorName::isNull
        
            typedef bool ( ::SireSystem::MonitorName::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::SireSystem::MonitorName::isNull );
            
            MonitorName_exposer.def( 
                "isNull"
                , isNull_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireSystem::MonitorName::map
        
            typedef ::QList< SireSystem::MonitorName > ( ::SireSystem::MonitorName::*map_function_type)( ::SireSystem::SystemMonitors const & ) const;
            map_function_type map_function_value( &::SireSystem::MonitorName::map );
            
            MonitorName_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("monitors") )
                , bp::release_gil_policy()
                , "" );
        
        }
        MonitorName_exposer.def( bp::self != bp::other< SireID::ID >() );
        MonitorName_exposer.def( bp::self != bp::self );
        { //::SireSystem::MonitorName::operator=
        
            typedef ::SireSystem::MonitorName & ( ::SireSystem::MonitorName::*assign_function_type)( ::SireSystem::MonitorName const & ) ;
            assign_function_type assign_function_value( &::SireSystem::MonitorName::operator= );
            
            MonitorName_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        MonitorName_exposer.def( bp::self == bp::other< SireID::ID >() );
        MonitorName_exposer.def( bp::self == bp::self );
        { //::SireSystem::MonitorName::toString
        
            typedef ::QString ( ::SireSystem::MonitorName::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireSystem::MonitorName::toString );
            
            MonitorName_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireSystem::MonitorName::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireSystem::MonitorName::typeName );
            
            MonitorName_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireSystem::MonitorName::what
        
            typedef char const * ( ::SireSystem::MonitorName::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireSystem::MonitorName::what );
            
            MonitorName_exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        MonitorName_exposer.staticmethod( "typeName" );
        MonitorName_exposer.def( "__copy__", &__copy__<SireSystem::MonitorName>);
        MonitorName_exposer.def( "__deepcopy__", &__copy__<SireSystem::MonitorName>);
        MonitorName_exposer.def( "clone", &__copy__<SireSystem::MonitorName>);
        MonitorName_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireSystem::MonitorName >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        MonitorName_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireSystem::MonitorName >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        MonitorName_exposer.def_pickle(sire_pickle_suite< ::SireSystem::MonitorName >());
        MonitorName_exposer.def( "__str__", &__str__< ::SireSystem::MonitorName > );
        MonitorName_exposer.def( "__repr__", &__str__< ::SireSystem::MonitorName > );
        MonitorName_exposer.def( "__hash__", &::SireSystem::MonitorName::hash );
    }

}
