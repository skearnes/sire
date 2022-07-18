// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Max.pypp.hpp"

namespace bp = boost::python;

#include "SireMaths/errors.h"

#include "SireStream/datastream.h"

#include "complexvalues.h"

#include "expression.h"

#include "identities.h"

#include "minmax.h"

#include "minmax.h"

SireCAS::Max __copy__(const SireCAS::Max &other){ return SireCAS::Max(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_Max_class(){

    { //::SireCAS::Max
        typedef bp::class_< SireCAS::Max, bp::bases< SireCAS::DoubleFunc, SireCAS::ExBase > > Max_exposer_t;
        Max_exposer_t Max_exposer = Max_exposer_t( "Max", "Maximum value of two expressions", bp::init< >("Constructor") );
        bp::scope Max_scope( Max_exposer );
        Max_exposer.def( bp::init< SireCAS::Expression const &, SireCAS::Expression const & >(( bp::arg("x"), bp::arg("y") ), "Construct min(x(), y())") );
        Max_exposer.def( bp::init< SireCAS::Max const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireCAS::Max::evaluate
        
            typedef double ( ::SireCAS::Max::*evaluate_function_type)( ::SireCAS::Values const & ) const;
            evaluate_function_type evaluate_function_value( &::SireCAS::Max::evaluate );
            
            Max_exposer.def( 
                "evaluate"
                , evaluate_function_value
                , ( bp::arg("values") )
                , bp::release_gil_policy()
                , "Evaluate this function" );
        
        }
        { //::SireCAS::Max::evaluate
        
            typedef ::SireMaths::Complex ( ::SireCAS::Max::*evaluate_function_type)( ::SireCAS::ComplexValues const & ) const;
            evaluate_function_type evaluate_function_value( &::SireCAS::Max::evaluate );
            
            Max_exposer.def( 
                "evaluate"
                , evaluate_function_value
                , ( bp::arg("values") )
                , bp::release_gil_policy()
                , "Complex evaluation" );
        
        }
        Max_exposer.def( bp::self == bp::other< SireCAS::ExBase >() );
        { //::SireCAS::Max::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireCAS::Max::typeName );
            
            Max_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireCAS::Max::what
        
            typedef char const * ( ::SireCAS::Max::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireCAS::Max::what );
            
            Max_exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        Max_exposer.staticmethod( "typeName" );
        Max_exposer.def( "__copy__", &__copy__);
        Max_exposer.def( "__deepcopy__", &__copy__);
        Max_exposer.def( "clone", &__copy__);
        Max_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireCAS::Max >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Max_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireCAS::Max >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Max_exposer.def_pickle(sire_pickle_suite< ::SireCAS::Max >());
        Max_exposer.def( "__str__", &__str__< ::SireCAS::Max > );
        Max_exposer.def( "__repr__", &__str__< ::SireCAS::Max > );
        Max_exposer.def( "__hash__", &::SireCAS::Max::hash );
    }

}
