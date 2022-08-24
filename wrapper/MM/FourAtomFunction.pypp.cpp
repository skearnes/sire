// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "FourAtomFunction.pypp.hpp"

namespace bp = boost::python;

#include "SireCAS/symbols.h"

#include "SireMol/atommatcher.h"

#include "SireMol/atomselection.h"

#include "SireMol/errors.h"

#include "SireMol/moleculeinfodata.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "fouratomfunctions.h"

#include "sireglobal.h"

#include "fouratomfunctions.h"

SireMM::FourAtomFunction __copy__(const SireMM::FourAtomFunction &other){ return SireMM::FourAtomFunction(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_FourAtomFunction_class(){

    { //::SireMM::FourAtomFunction
        typedef bp::class_< SireMM::FourAtomFunction, bp::bases< SireMM::AtomFunction > > FourAtomFunction_exposer_t;
        FourAtomFunction_exposer_t FourAtomFunction_exposer = FourAtomFunction_exposer_t( "FourAtomFunction", "This class holds a function that acts using the\ncoordinate information of just four atoms", bp::init< >("Constructor") );
        bp::scope FourAtomFunction_scope( FourAtomFunction_exposer );
        FourAtomFunction_exposer.def( bp::init< SireMol::CGAtomIdx const &, SireMol::CGAtomIdx const &, SireMol::CGAtomIdx const &, SireMol::CGAtomIdx const &, SireCAS::Expression const & >(( bp::arg("atom0"), bp::arg("atom1"), bp::arg("atom2"), bp::arg("atom3"), bp::arg("function") ), "Construct for the specified pair of atoms with the specified function") );
        FourAtomFunction_exposer.def( bp::init< SireMM::FourAtomFunction const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMM::FourAtomFunction::atom0
        
            typedef ::SireMol::CGAtomIdx const & ( ::SireMM::FourAtomFunction::*atom0_function_type)(  ) const;
            atom0_function_type atom0_function_value( &::SireMM::FourAtomFunction::atom0 );
            
            FourAtomFunction_exposer.def( 
                "atom0"
                , atom0_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );
        
        }
        { //::SireMM::FourAtomFunction::atom1
        
            typedef ::SireMol::CGAtomIdx const & ( ::SireMM::FourAtomFunction::*atom1_function_type)(  ) const;
            atom1_function_type atom1_function_value( &::SireMM::FourAtomFunction::atom1 );
            
            FourAtomFunction_exposer.def( 
                "atom1"
                , atom1_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );
        
        }
        { //::SireMM::FourAtomFunction::atom2
        
            typedef ::SireMol::CGAtomIdx const & ( ::SireMM::FourAtomFunction::*atom2_function_type)(  ) const;
            atom2_function_type atom2_function_value( &::SireMM::FourAtomFunction::atom2 );
            
            FourAtomFunction_exposer.def( 
                "atom2"
                , atom2_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );
        
        }
        { //::SireMM::FourAtomFunction::atom3
        
            typedef ::SireMol::CGAtomIdx const & ( ::SireMM::FourAtomFunction::*atom3_function_type)(  ) const;
            atom3_function_type atom3_function_value( &::SireMM::FourAtomFunction::atom3 );
            
            FourAtomFunction_exposer.def( 
                "atom3"
                , atom3_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );
        
        }
        FourAtomFunction_exposer.def( bp::self != bp::self );
        { //::SireMM::FourAtomFunction::operator=
        
            typedef ::SireMM::FourAtomFunction & ( ::SireMM::FourAtomFunction::*assign_function_type)( ::SireMM::FourAtomFunction const & ) ;
            assign_function_type assign_function_value( &::SireMM::FourAtomFunction::operator= );
            
            FourAtomFunction_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        FourAtomFunction_exposer.def( bp::self == bp::self );
        { //::SireMM::FourAtomFunction::toString
        
            typedef ::QString ( ::SireMM::FourAtomFunction::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMM::FourAtomFunction::toString );
            
            FourAtomFunction_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "Return a string representation" );
        
        }
        FourAtomFunction_exposer.def( "__copy__", &__copy__);
        FourAtomFunction_exposer.def( "__deepcopy__", &__copy__);
        FourAtomFunction_exposer.def( "clone", &__copy__);
        FourAtomFunction_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::FourAtomFunction >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        FourAtomFunction_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::FourAtomFunction >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        FourAtomFunction_exposer.def_pickle(sire_pickle_suite< ::SireMM::FourAtomFunction >());
        FourAtomFunction_exposer.def( "__str__", &__str__< ::SireMM::FourAtomFunction > );
        FourAtomFunction_exposer.def( "__repr__", &__str__< ::SireMM::FourAtomFunction > );
    }

}
