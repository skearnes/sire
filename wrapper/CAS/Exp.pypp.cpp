// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Exp.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "complexvalues.h"

#include "exp.h"

#include "integrationconstant.h"

#include "values.h"

#include "exp.h"

SireCAS::Exp __copy__(const SireCAS::Exp &other){ return SireCAS::Exp(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_Exp_class(){

    { //::SireCAS::Exp
        typedef bp::class_< SireCAS::Exp, bp::bases< SireCAS::PowerFunction, SireCAS::ExBase > > Exp_exposer_t;
        Exp_exposer_t Exp_exposer = Exp_exposer_t( "Exp", bp::init< >() );
        bp::scope Exp_scope( Exp_exposer );
        Exp_exposer.def( bp::init< SireCAS::Expression const & >(( bp::arg("power") )) );
        Exp_exposer.def( bp::init< SireCAS::Exp const & >(( bp::arg("other") )) );
        { //::SireCAS::Exp::core
        
            typedef ::SireCAS::Expression ( ::SireCAS::Exp::*core_function_type)(  ) const;
            core_function_type core_function_value( &::SireCAS::Exp::core );
            
            Exp_exposer.def( 
                "core"
                , core_function_value );
        
        }
        { //::SireCAS::Exp::differentiate
        
            typedef ::SireCAS::Expression ( ::SireCAS::Exp::*differentiate_function_type)( ::SireCAS::Symbol const & ) const;
            differentiate_function_type differentiate_function_value( &::SireCAS::Exp::differentiate );
            
            Exp_exposer.def( 
                "differentiate"
                , differentiate_function_value
                , ( bp::arg("symbol") ) );
        
        }
        { //::SireCAS::Exp::evaluate
        
            typedef double ( ::SireCAS::Exp::*evaluate_function_type)( ::SireCAS::Values const & ) const;
            evaluate_function_type evaluate_function_value( &::SireCAS::Exp::evaluate );
            
            Exp_exposer.def( 
                "evaluate"
                , evaluate_function_value
                , ( bp::arg("values") ) );
        
        }
        { //::SireCAS::Exp::evaluate
        
            typedef ::SireMaths::Complex ( ::SireCAS::Exp::*evaluate_function_type)( ::SireCAS::ComplexValues const & ) const;
            evaluate_function_type evaluate_function_value( &::SireCAS::Exp::evaluate );
            
            Exp_exposer.def( 
                "evaluate"
                , evaluate_function_value
                , ( bp::arg("values") ) );
        
        }
        { //::SireCAS::Exp::hash
        
            typedef ::uint ( ::SireCAS::Exp::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireCAS::Exp::hash );
            
            Exp_exposer.def( 
                "hash"
                , hash_function_value );
        
        }
        { //::SireCAS::Exp::integrate
        
            typedef ::SireCAS::Expression ( ::SireCAS::Exp::*integrate_function_type)( ::SireCAS::Symbol const & ) const;
            integrate_function_type integrate_function_value( &::SireCAS::Exp::integrate );
            
            Exp_exposer.def( 
                "integrate"
                , integrate_function_value
                , ( bp::arg("symbol") ) );
        
        }
        Exp_exposer.def( bp::self == bp::other< SireCAS::ExBase >() );
        { //::SireCAS::Exp::power
        
            typedef ::SireCAS::Expression ( ::SireCAS::Exp::*power_function_type)(  ) const;
            power_function_type power_function_value( &::SireCAS::Exp::power );
            
            Exp_exposer.def( 
                "power"
                , power_function_value );
        
        }
        { //::SireCAS::Exp::toString
        
            typedef ::QString ( ::SireCAS::Exp::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireCAS::Exp::toString );
            
            Exp_exposer.def( 
                "toString"
                , toString_function_value );
        
        }
        { //::SireCAS::Exp::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireCAS::Exp::typeName );
            
            Exp_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        { //::SireCAS::Exp::what
        
            typedef char const * ( ::SireCAS::Exp::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireCAS::Exp::what );
            
            Exp_exposer.def( 
                "what"
                , what_function_value );
        
        }
        Exp_exposer.staticmethod( "typeName" );
        Exp_exposer.def( "__copy__", &__copy__);
        Exp_exposer.def( "__deepcopy__", &__copy__);
        Exp_exposer.def( "clone", &__copy__);
        Exp_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireCAS::Exp >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Exp_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireCAS::Exp >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Exp_exposer.def( "__str__", &__str__< ::SireCAS::Exp > );
        Exp_exposer.def( "__repr__", &__str__< ::SireCAS::Exp > );
    }

}
