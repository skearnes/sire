// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "Factor.pypp.hpp"

namespace bp = boost::python;

#include "SireCAS/errors.h"

#include "SireStream/datastream.h"

#include "complexvalues.h"

#include "expressions.h"

#include "functions.h"

#include "identities.h"

#include "symbol.h"

#include "symbols.h"

#include "values.h"

#include <QDebug>

#include <QHash>

#include <QMutex>

#include "symbol.h"

SireCAS::Factor __copy__(const SireCAS::Factor &other){ return SireCAS::Factor(other); }

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_Factor_class(){

    { //::SireCAS::Factor
        typedef bp::class_< SireCAS::Factor > Factor_exposer_t;
        Factor_exposer_t Factor_exposer = Factor_exposer_t( "Factor", "This is a small class that can hold the factor and power of a symbol\n\nAuthor: Christopher Woods\n", bp::init< >("") );
        bp::scope Factor_scope( Factor_exposer );
        Factor_exposer.def( bp::init< SireCAS::Symbol const &, double, double >(( bp::arg("symbol"), bp::arg("factor"), bp::arg("power") ), "") );
        Factor_exposer.def( bp::init< SireCAS::Symbol const &, SireCAS::Expression const &, SireCAS::Expression const & >(( bp::arg("symbol"), bp::arg("factor"), bp::arg("power") ), "") );
        Factor_exposer.def( bp::init< SireCAS::Factor const & >(( bp::arg("other") ), "") );
        { //::SireCAS::Factor::factor
        
            typedef ::SireCAS::Expression const & ( ::SireCAS::Factor::*factor_function_type)(  ) const;
            factor_function_type factor_function_value( &::SireCAS::Factor::factor );
            
            Factor_exposer.def( 
                "factor"
                , factor_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        Factor_exposer.def( bp::self != bp::self );
        { //::SireCAS::Factor::operator=
        
            typedef ::SireCAS::Factor & ( ::SireCAS::Factor::*assign_function_type)( ::SireCAS::Factor const & ) ;
            assign_function_type assign_function_value( &::SireCAS::Factor::operator= );
            
            Factor_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        Factor_exposer.def( bp::self == bp::self );
        { //::SireCAS::Factor::power
        
            typedef ::SireCAS::Expression const & ( ::SireCAS::Factor::*power_function_type)(  ) const;
            power_function_type power_function_value( &::SireCAS::Factor::power );
            
            Factor_exposer.def( 
                "power"
                , power_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireCAS::Factor::symbol
        
            typedef ::SireCAS::Symbol const & ( ::SireCAS::Factor::*symbol_function_type)(  ) const;
            symbol_function_type symbol_function_value( &::SireCAS::Factor::symbol );
            
            Factor_exposer.def( 
                "symbol"
                , symbol_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );
        
        }
        { //::SireCAS::Factor::toString
        
            typedef ::QString ( ::SireCAS::Factor::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireCAS::Factor::toString );
            
            Factor_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        Factor_exposer.def( "__copy__", &__copy__);
        Factor_exposer.def( "__deepcopy__", &__copy__);
        Factor_exposer.def( "clone", &__copy__);
        Factor_exposer.def( "__str__", &__str__< ::SireCAS::Factor > );
        Factor_exposer.def( "__repr__", &__str__< ::SireCAS::Factor > );
    }

}
