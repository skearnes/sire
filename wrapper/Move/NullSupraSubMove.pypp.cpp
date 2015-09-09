// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "NullSupraSubMove.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "suprasubmove.h"

#include "suprasubsystem.h"

#include "suprasubmove.h"

SireMove::NullSupraSubMove __copy__(const SireMove::NullSupraSubMove &other){ return SireMove::NullSupraSubMove(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_NullSupraSubMove_class(){

    { //::SireMove::NullSupraSubMove
        typedef bp::class_< SireMove::NullSupraSubMove, bp::bases< SireMove::SupraSubMove, SireBase::Property > > NullSupraSubMove_exposer_t;
        NullSupraSubMove_exposer_t NullSupraSubMove_exposer = NullSupraSubMove_exposer_t( "NullSupraSubMove", bp::init< >() );
        bp::scope NullSupraSubMove_scope( NullSupraSubMove_exposer );
        NullSupraSubMove_exposer.def( bp::init< SireMove::NullSupraSubMove const & >(( bp::arg("other") )) );
        { //::SireMove::NullSupraSubMove::move
        
            typedef void ( ::SireMove::NullSupraSubMove::*move_function_type)( ::SireMove::SupraSubSystem &,int,int,bool ) ;
            move_function_type move_function_value( &::SireMove::NullSupraSubMove::move );
            
            NullSupraSubMove_exposer.def( 
                "move"
                , move_function_value
                , ( bp::arg("system"), bp::arg("n_supra_moves"), bp::arg("n_supra_moves_per_block"), bp::arg("record_stats") ) );
        
        }
        NullSupraSubMove_exposer.def( bp::self != bp::self );
        { //::SireMove::NullSupraSubMove::operator=
        
            typedef ::SireMove::NullSupraSubMove & ( ::SireMove::NullSupraSubMove::*assign_function_type)( ::SireMove::NullSupraSubMove const & ) ;
            assign_function_type assign_function_value( &::SireMove::NullSupraSubMove::operator= );
            
            NullSupraSubMove_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        NullSupraSubMove_exposer.def( bp::self == bp::self );
        { //::SireMove::NullSupraSubMove::toString
        
            typedef ::QString ( ::SireMove::NullSupraSubMove::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMove::NullSupraSubMove::toString );
            
            NullSupraSubMove_exposer.def( 
                "toString"
                , toString_function_value );
        
        }
        { //::SireMove::NullSupraSubMove::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMove::NullSupraSubMove::typeName );
            
            NullSupraSubMove_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        NullSupraSubMove_exposer.staticmethod( "typeName" );
        NullSupraSubMove_exposer.def( "__copy__", &__copy__);
        NullSupraSubMove_exposer.def( "__deepcopy__", &__copy__);
        NullSupraSubMove_exposer.def( "clone", &__copy__);
        NullSupraSubMove_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMove::NullSupraSubMove >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        NullSupraSubMove_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMove::NullSupraSubMove >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        NullSupraSubMove_exposer.def( "__str__", &__str__< ::SireMove::NullSupraSubMove > );
        NullSupraSubMove_exposer.def( "__repr__", &__str__< ::SireMove::NullSupraSubMove > );
    }

}
