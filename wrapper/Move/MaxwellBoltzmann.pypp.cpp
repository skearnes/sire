// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "MaxwellBoltzmann.pypp.hpp"

namespace bp = boost::python;

#include "SireCAS/symbol.h"

#include "SireMol/atomelements.h"

#include "SireMol/atommasses.h"

#include "SireMol/atomvelocities.h"

#include "SireMol/moleculedata.h"

#include "SireMol/moleculeinfodata.h"

#include "SireMol/moleculeview.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireUnits/dimensions.h"

#include "SireUnits/temperature.h"

#include "SireUnits/units.h"

#include "velocitygenerator.h"

#include "velocitygenerator.h"

SireMove::MaxwellBoltzmann __copy__(const SireMove::MaxwellBoltzmann &other){ return SireMove::MaxwellBoltzmann(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_MaxwellBoltzmann_class(){

    { //::SireMove::MaxwellBoltzmann
        typedef bp::class_< SireMove::MaxwellBoltzmann, bp::bases< SireMove::VelocityGenerator, SireBase::Property > > MaxwellBoltzmann_exposer_t;
        MaxwellBoltzmann_exposer_t MaxwellBoltzmann_exposer = MaxwellBoltzmann_exposer_t( "MaxwellBoltzmann", "This is a velocity generator that generates random velocities\naccording to the Maxwell-Boltzmann distribution\n\nAuthor: Christopher Woods\n", bp::init< >("Construct to generate velocities correct for a temperature of 25 C") );
        bp::scope MaxwellBoltzmann_scope( MaxwellBoltzmann_exposer );
        MaxwellBoltzmann_exposer.def( bp::init< SireUnits::Dimension::Temperature >(( bp::arg("temperature") ), "Construct to generate velocities correct for the passed temperature") );
        MaxwellBoltzmann_exposer.def( bp::init< SireMove::MaxwellBoltzmann const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMove::MaxwellBoltzmann::generate
        
            typedef ::SireMol::AtomVelocities ( ::SireMove::MaxwellBoltzmann::*generate_function_type)( ::SireMol::MoleculeView const &,::SireBase::PropertyMap const & ) const;
            generate_function_type generate_function_value( &::SireMove::MaxwellBoltzmann::generate );
            
            MaxwellBoltzmann_exposer.def( 
                "generate"
                , generate_function_value
                , ( bp::arg("molview"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::release_gil_policy()
                , "Generate completely random velocities" );
        
        }
        { //::SireMove::MaxwellBoltzmann::generator
        
            typedef ::SireMaths::RanGenerator const & ( ::SireMove::MaxwellBoltzmann::*generator_function_type)(  ) const;
            generator_function_type generator_function_value( &::SireMove::MaxwellBoltzmann::generator );
            
            MaxwellBoltzmann_exposer.def( 
                "generator"
                , generator_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the random number generator used to generate random velocities" );
        
        }
        MaxwellBoltzmann_exposer.def( bp::self != bp::self );
        { //::SireMove::MaxwellBoltzmann::operator=
        
            typedef ::SireMove::MaxwellBoltzmann & ( ::SireMove::MaxwellBoltzmann::*assign_function_type)( ::SireMove::MaxwellBoltzmann const & ) ;
            assign_function_type assign_function_value( &::SireMove::MaxwellBoltzmann::operator= );
            
            MaxwellBoltzmann_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        MaxwellBoltzmann_exposer.def( bp::self == bp::self );
        { //::SireMove::MaxwellBoltzmann::setGenerator
        
            typedef void ( ::SireMove::MaxwellBoltzmann::*setGenerator_function_type)( ::SireMaths::RanGenerator const & ) ;
            setGenerator_function_type setGenerator_function_value( &::SireMove::MaxwellBoltzmann::setGenerator );
            
            MaxwellBoltzmann_exposer.def( 
                "setGenerator"
                , setGenerator_function_value
                , ( bp::arg("rangenerator") )
                , bp::release_gil_policy()
                , "Set the random number generator used to generate the random velocities" );
        
        }
        { //::SireMove::MaxwellBoltzmann::setTemperature
        
            typedef void ( ::SireMove::MaxwellBoltzmann::*setTemperature_function_type)( ::SireUnits::Dimension::Temperature ) ;
            setTemperature_function_type setTemperature_function_value( &::SireMove::MaxwellBoltzmann::setTemperature );
            
            MaxwellBoltzmann_exposer.def( 
                "setTemperature"
                , setTemperature_function_value
                , ( bp::arg("temperature") )
                , bp::release_gil_policy()
                , "Set the temperature at which the velocities will be generated" );
        
        }
        { //::SireMove::MaxwellBoltzmann::temperature
        
            typedef ::SireUnits::Dimension::Temperature ( ::SireMove::MaxwellBoltzmann::*temperature_function_type)(  ) const;
            temperature_function_type temperature_function_value( &::SireMove::MaxwellBoltzmann::temperature );
            
            MaxwellBoltzmann_exposer.def( 
                "temperature"
                , temperature_function_value
                , bp::release_gil_policy()
                , "Return the temperature for which the velocities will be generated" );
        
        }
        { //::SireMove::MaxwellBoltzmann::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMove::MaxwellBoltzmann::typeName );
            
            MaxwellBoltzmann_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        MaxwellBoltzmann_exposer.staticmethod( "typeName" );
        MaxwellBoltzmann_exposer.def( "__copy__", &__copy__);
        MaxwellBoltzmann_exposer.def( "__deepcopy__", &__copy__);
        MaxwellBoltzmann_exposer.def( "clone", &__copy__);
        MaxwellBoltzmann_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMove::MaxwellBoltzmann >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        MaxwellBoltzmann_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMove::MaxwellBoltzmann >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        MaxwellBoltzmann_exposer.def_pickle(sire_pickle_suite< ::SireMove::MaxwellBoltzmann >());
        MaxwellBoltzmann_exposer.def( "__str__", &__str__< ::SireMove::MaxwellBoltzmann > );
        MaxwellBoltzmann_exposer.def( "__repr__", &__str__< ::SireMove::MaxwellBoltzmann > );
    }

}
