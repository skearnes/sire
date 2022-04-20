// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "InternalPerturbation.pypp.hpp"

namespace bp = boost::python;

#include "SireCAS/values.h"

#include "SireMol/molecule.h"

#include "SireMol/moleditor.h"

#include "SireMol/mover.hpp"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "fouratomfunctions.h"

#include "internalperturbation.h"

#include "threeatomfunctions.h"

#include "twoatomfunctions.h"

#include "internalperturbation.h"

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_InternalPerturbation_class(){

    { //::SireMM::InternalPerturbation
        typedef bp::class_< SireMM::InternalPerturbation, bp::bases< SireMol::Perturbation, SireBase::Property >, boost::noncopyable > InternalPerturbation_exposer_t;
        InternalPerturbation_exposer_t InternalPerturbation_exposer = InternalPerturbation_exposer_t( "InternalPerturbation", "This is the base class of all internal perturbations - these\nare perturbations that change the internal potential of a\nmolecule (e.g. the bond, angle and dihedral parameters)\n\nInternal perturbation work by applying the mapping function\nto the identities in initialForm() and finalForm() and then\nsubstituting these identities into baseExpression(), e.g.\n\ninitialForm() :=>  k = k_{initial},  r0 = r0_{initial}\nfinalForm()   :=>  k = k_{final},    r0 = r0_{final}\n\nbaseExpression() :=>  k  (r - r0)2\n\nmappingFunction() :=>  (1-lam)initial + lamfinal\n\nThis will result in the the perturbing function being\n\nperturbFunction() :=> [ (1-lam)k_{initial} + lamk_{final} ]\n(r - [(1-lam)r0_{initial} + lamr0_{final}])2\n\nequally, if\n\ninitialForm() :=> f = 3  cos(5 phi)\nfinalForm()   :=> f = 5  cos(8 phi)\n\nbaseExpression() :=>  f\n\nmappingFunction() :=> (1-lam)initial + lamfinal\n\nThis will result in\n\nperturbFunction() :=> (1-lam)(3  cos(5 phi)) + lam  (5  cos(8 phi))\n\nAuthor: Christopher Woods\n", bp::no_init );
        bp::scope InternalPerturbation_scope( InternalPerturbation_exposer );
        { //::SireMM::InternalPerturbation::baseExpression
        
            typedef ::SireCAS::Expression const & ( ::SireMM::InternalPerturbation::*baseExpression_function_type)(  ) const;
            baseExpression_function_type baseExpression_function_value( &::SireMM::InternalPerturbation::baseExpression );
            
            InternalPerturbation_exposer.def( 
                "baseExpression"
                , baseExpression_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the base expression - this is the expression into which\nthe mapped identites are substituted" );
        
        }
        { //::SireMM::InternalPerturbation::finalForms
        
            typedef ::SireCAS::Identities const & ( ::SireMM::InternalPerturbation::*finalForms_function_type)(  ) const;
            finalForms_function_type finalForms_function_value( &::SireMM::InternalPerturbation::finalForms );
            
            InternalPerturbation_exposer.def( 
                "finalForms"
                , finalForms_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the final forms - these are the identities that\nare substituted into the base expression at the final state" );
        
        }
        { //::SireMM::InternalPerturbation::initialForms
        
            typedef ::SireCAS::Identities const & ( ::SireMM::InternalPerturbation::*initialForms_function_type)(  ) const;
            initialForms_function_type initialForms_function_value( &::SireMM::InternalPerturbation::initialForms );
            
            InternalPerturbation_exposer.def( 
                "initialForms"
                , initialForms_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the initial forms - these are the identities that\nare substituted into the base expression at the initial state" );
        
        }
        { //::SireMM::InternalPerturbation::perturbExpression
        
            typedef ::SireCAS::Expression const & ( ::SireMM::InternalPerturbation::*perturbExpression_function_type)(  ) const;
            perturbExpression_function_type perturbExpression_function_value( &::SireMM::InternalPerturbation::perturbExpression );
            
            InternalPerturbation_exposer.def( 
                "perturbExpression"
                , perturbExpression_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the perturbed expression - this is the expression that\nis used to calculate the energy" );
        
        }
        { //::SireMM::InternalPerturbation::recreate
        
            typedef ::SireMol::PerturbationPtr ( ::SireMM::InternalPerturbation::*recreate_function_type)( ::SireCAS::Expression const & ) const;
            recreate_function_type recreate_function_value( &::SireMM::InternalPerturbation::recreate );
            
            InternalPerturbation_exposer.def( 
                "recreate"
                , recreate_function_value
                , ( bp::arg("expression") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::InternalPerturbation::recreate
        
            typedef ::SireMol::PerturbationPtr ( ::SireMM::InternalPerturbation::*recreate_function_type)( ::SireCAS::Expression const &,::SireBase::PropertyMap const & ) const;
            recreate_function_type recreate_function_value( &::SireMM::InternalPerturbation::recreate );
            
            InternalPerturbation_exposer.def( 
                "recreate"
                , recreate_function_value
                , ( bp::arg("expression"), bp::arg("map") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::InternalPerturbation::substitute
        
            typedef ::SireMol::PerturbationPtr ( ::SireMM::InternalPerturbation::*substitute_function_type)( ::SireCAS::Identities const & ) const;
            substitute_function_type substitute_function_value( &::SireMM::InternalPerturbation::substitute );
            
            InternalPerturbation_exposer.def( 
                "substitute"
                , substitute_function_value
                , ( bp::arg("identities") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::InternalPerturbation::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::InternalPerturbation::typeName );
            
            InternalPerturbation_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        InternalPerturbation_exposer.staticmethod( "typeName" );
        InternalPerturbation_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::InternalPerturbation >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        InternalPerturbation_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::InternalPerturbation >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        InternalPerturbation_exposer.def_pickle(sire_pickle_suite< ::SireMM::InternalPerturbation >());
        InternalPerturbation_exposer.def( "__str__", &__str__< ::SireMM::InternalPerturbation > );
        InternalPerturbation_exposer.def( "__repr__", &__str__< ::SireMM::InternalPerturbation > );
    }

}
