// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "HybridMC.pypp.hpp"

namespace bp = boost::python;

#include "SireMol/atomelements.h"

#include "SireMol/atommasses.h"

#include "SireMol/atomvelocities.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireUnits/temperature.h"

#include "SireUnits/units.h"

#include "hybridmc.h"

#include <QDebug>

#include "hybridmc.h"

SireMove::HybridMC __copy__(const SireMove::HybridMC &other){ return SireMove::HybridMC(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_HybridMC_class(){

    { //::SireMove::HybridMC
        typedef bp::class_< SireMove::HybridMC, bp::bases< SireMove::MonteCarlo, SireMove::Move, SireBase::Property > > HybridMC_exposer_t;
        HybridMC_exposer_t HybridMC_exposer = HybridMC_exposer_t( "HybridMC", "This class implements a hybrid Monte Carlo move. This is a\nMonte Carlo move that uses a symplectic, time-reversible\nNVE integrator to run some molecular dynamics. The block\nof MD is accepted according to a Metropolis MC test\non the change in total energy (kinetic+potential).\n\nAuthor: Christopher Woods\n", bp::init< bp::optional< SireBase::PropertyMap const & > >(( bp::arg("map")=SireBase::PropertyMap() ), "Empty constructor") );
        bp::scope HybridMC_scope( HybridMC_exposer );
        HybridMC_exposer.def( bp::init< SireMol::MoleculeGroup const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("molgroup"), bp::arg("map")=SireBase::PropertyMap() ), "Construct to perform hybrid MC moves on the passed molecule group") );
        HybridMC_exposer.def( bp::init< SireMol::MoleculeGroup const &, SireMove::Integrator const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("molgroup"), bp::arg("integrator"), bp::arg("map")=SireBase::PropertyMap() ), "Construct to perform hybrid MC moves on the passed molecule group\nusing the passed integrator") );
        HybridMC_exposer.def( bp::init< SireMol::MoleculeGroup const &, SireUnits::Dimension::Time, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("molgroup"), bp::arg("timestep"), bp::arg("map")=SireBase::PropertyMap() ), "Construct to perform hybrid MC moves on the passed molecule group\nwith a timestep of timestep") );
        HybridMC_exposer.def( bp::init< SireMol::MoleculeGroup const &, SireMove::Integrator const &, SireUnits::Dimension::Time, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("molgroup"), bp::arg("integrator"), bp::arg("timestep"), bp::arg("map")=SireBase::PropertyMap() ), "Construct to perform hybrid MC moves on the passed molecule group\nusing the passed integrator and a timestep of timestep") );
        HybridMC_exposer.def( bp::init< SireMol::MoleculeGroup const &, int, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("molgroup"), bp::arg("nsteps"), bp::arg("map")=SireBase::PropertyMap() ), "Construct to perform hybrid MC moves on the passed molecule group,\nrunning nmoves MD moves per MC move") );
        HybridMC_exposer.def( bp::init< SireMol::MoleculeGroup const &, SireMove::Integrator const &, int, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("molgroup"), bp::arg("integrator"), bp::arg("nsteps"), bp::arg("map")=SireBase::PropertyMap() ), "Construct to perform hybrid MC moves on the passed molecule group,\nusing the passed integrator, running nmoves MD moves per MC move") );
        HybridMC_exposer.def( bp::init< SireMol::MoleculeGroup const &, SireUnits::Dimension::Time, int, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("molgroup"), bp::arg("timestep"), bp::arg("nsteps"), bp::arg("map")=SireBase::PropertyMap() ), "Construct to perform hybrid MC moves on the passed molecule group,\nwith a timestep of timestep, running nmoves MD moves per MC move") );
        HybridMC_exposer.def( bp::init< SireMol::MoleculeGroup const &, SireMove::Integrator const &, SireUnits::Dimension::Time, int, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("molgroup"), bp::arg("integrator"), bp::arg("timestep"), bp::arg("nsteps"), bp::arg("map")=SireBase::PropertyMap() ), "Construct to perform hybrid MC moves on the passed molecule group,\nusing the passed integrator, with a timestep of timestep,\nrunning nmoves MD moves per MC move") );
        HybridMC_exposer.def( bp::init< SireMove::HybridMC const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMove::HybridMC::moleculeGroup
        
            typedef ::SireMol::MoleculeGroup const & ( ::SireMove::HybridMC::*moleculeGroup_function_type)(  ) const;
            moleculeGroup_function_type moleculeGroup_function_value( &::SireMove::HybridMC::moleculeGroup );
            
            HybridMC_exposer.def( 
                "moleculeGroup"
                , moleculeGroup_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return the molecule group that is moved by this move" );
        
        }
        { //::SireMove::HybridMC::move
        
            typedef void ( ::SireMove::HybridMC::*move_function_type)( ::SireSystem::System &,int,bool ) ;
            move_function_type move_function_value( &::SireMove::HybridMC::move );
            
            HybridMC_exposer.def( 
                "move"
                , move_function_value
                , ( bp::arg("system"), bp::arg("nmoves"), bp::arg("record_stats")=(bool)(true) )
                , bp::release_gil_policy()
                , "Perform nmoves hybrid MC moves on the passed system, recording\nstatistics is record_stats is true" );
        
        }
        { //::SireMove::HybridMC::nDynamicsSteps
        
            typedef int ( ::SireMove::HybridMC::*nDynamicsSteps_function_type)(  ) ;
            nDynamicsSteps_function_type nDynamicsSteps_function_value( &::SireMove::HybridMC::nDynamicsSteps );
            
            HybridMC_exposer.def( 
                "nDynamicsSteps"
                , nDynamicsSteps_function_value
                , bp::release_gil_policy()
                , "Return the number of MD steps to perform per hybrid MC move" );
        
        }
        HybridMC_exposer.def( bp::self != bp::self );
        { //::SireMove::HybridMC::operator=
        
            typedef ::SireMove::HybridMC & ( ::SireMove::HybridMC::*assign_function_type)( ::SireMove::HybridMC const & ) ;
            assign_function_type assign_function_value( &::SireMove::HybridMC::operator= );
            
            HybridMC_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        HybridMC_exposer.def( bp::self == bp::self );
        { //::SireMove::HybridMC::setCoordinatesProperty
        
            typedef void ( ::SireMove::HybridMC::*setCoordinatesProperty_function_type)( ::SireBase::PropertyName const & ) ;
            setCoordinatesProperty_function_type setCoordinatesProperty_function_value( &::SireMove::HybridMC::setCoordinatesProperty );
            
            HybridMC_exposer.def( 
                "setCoordinatesProperty"
                , setCoordinatesProperty_function_value
                , ( bp::arg("coords_property") )
                , bp::release_gil_policy()
                , "Set the location of the coordinates that are affected by this move" );
        
        }
        { //::SireMove::HybridMC::setGenerator
        
            typedef void ( ::SireMove::HybridMC::*setGenerator_function_type)( ::SireMaths::RanGenerator const & ) ;
            setGenerator_function_type setGenerator_function_value( &::SireMove::HybridMC::setGenerator );
            
            HybridMC_exposer.def( 
                "setGenerator"
                , setGenerator_function_value
                , ( bp::arg("rangenerator") )
                , bp::release_gil_policy()
                , "Set the random number generator that is used by this move" );
        
        }
        { //::SireMove::HybridMC::setNDynamicsSteps
        
            typedef void ( ::SireMove::HybridMC::*setNDynamicsSteps_function_type)( int ) ;
            setNDynamicsSteps_function_type setNDynamicsSteps_function_value( &::SireMove::HybridMC::setNDynamicsSteps );
            
            HybridMC_exposer.def( 
                "setNDynamicsSteps"
                , setNDynamicsSteps_function_value
                , ( bp::arg("nsteps") )
                , bp::release_gil_policy()
                , "Set the number of MD steps to perform per hybrid MC move" );
        
        }
        { //::SireMove::HybridMC::setSpaceProperty
        
            typedef void ( ::SireMove::HybridMC::*setSpaceProperty_function_type)( ::SireBase::PropertyName const & ) ;
            setSpaceProperty_function_type setSpaceProperty_function_value( &::SireMove::HybridMC::setSpaceProperty );
            
            HybridMC_exposer.def( 
                "setSpaceProperty"
                , setSpaceProperty_function_value
                , ( bp::arg("space_property") )
                , bp::release_gil_policy()
                , "Set the location of the space property used by this move" );
        
        }
        { //::SireMove::HybridMC::setTimeStep
        
            typedef void ( ::SireMove::HybridMC::*setTimeStep_function_type)( ::SireUnits::Dimension::Time ) ;
            setTimeStep_function_type setTimeStep_function_value( &::SireMove::HybridMC::setTimeStep );
            
            HybridMC_exposer.def( 
                "setTimeStep"
                , setTimeStep_function_value
                , ( bp::arg("timestep") )
                , bp::release_gil_policy()
                , "Set the timestep of the dynamics part of the move" );
        
        }
        { //::SireMove::HybridMC::setVelocityGenerator
        
            typedef void ( ::SireMove::HybridMC::*setVelocityGenerator_function_type)( ::SireMove::HMCVelGen const & ) ;
            setVelocityGenerator_function_type setVelocityGenerator_function_value( &::SireMove::HybridMC::setVelocityGenerator );
            
            HybridMC_exposer.def( 
                "setVelocityGenerator"
                , setVelocityGenerator_function_value
                , ( bp::arg("generator") )
                , bp::release_gil_policy()
                , "Set the velocity generator used to generate velocities that\nare compatible with the Hybrid MC move" );
        
        }
        { //::SireMove::HybridMC::timeStep
        
            typedef ::SireUnits::Dimension::Time ( ::SireMove::HybridMC::*timeStep_function_type)(  ) const;
            timeStep_function_type timeStep_function_value( &::SireMove::HybridMC::timeStep );
            
            HybridMC_exposer.def( 
                "timeStep"
                , timeStep_function_value
                , bp::release_gil_policy()
                , "Return the timestep of the dynamics part of the move" );
        
        }
        { //::SireMove::HybridMC::toString
        
            typedef ::QString ( ::SireMove::HybridMC::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMove::HybridMC::toString );
            
            HybridMC_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMove::HybridMC::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMove::HybridMC::typeName );
            
            HybridMC_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMove::HybridMC::velocityGenerator
        
            typedef ::SireMove::HMCVelGen const & ( ::SireMove::HybridMC::*velocityGenerator_function_type)(  ) const;
            velocityGenerator_function_type velocityGenerator_function_value( &::SireMove::HybridMC::velocityGenerator );
            
            HybridMC_exposer.def( 
                "velocityGenerator"
                , velocityGenerator_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the velocity generator used to generate the velocities\nthat are used by the hybrid MC move" );
        
        }
        HybridMC_exposer.staticmethod( "typeName" );
        HybridMC_exposer.def( "__copy__", &__copy__);
        HybridMC_exposer.def( "__deepcopy__", &__copy__);
        HybridMC_exposer.def( "clone", &__copy__);
        HybridMC_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMove::HybridMC >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        HybridMC_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMove::HybridMC >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        HybridMC_exposer.def_pickle(sire_pickle_suite< ::SireMove::HybridMC >());
        HybridMC_exposer.def( "__str__", &__str__< ::SireMove::HybridMC > );
        HybridMC_exposer.def( "__repr__", &__str__< ::SireMove::HybridMC > );
    }

}
