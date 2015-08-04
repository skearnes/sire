// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "OpenMMMDIntegrator.pypp.hpp"

namespace bp = boost::python;

#include "SireFF/forcetable.h"

#include "SireIO/amber.h"

#include "SireMM/atomljs.h"

#include "SireMM/internalff.h"

#include "SireMaths/constants.h"

#include "SireMaths/rangenerator.h"

#include "SireMaths/vector.h"

#include "SireMol/amberparameters.h"

#include "SireMol/atomcharges.h"

#include "SireMol/atomcoords.h"

#include "SireMol/atommasses.h"

#include "SireMol/bondid.h"

#include "SireMol/connectivity.h"

#include "SireMol/mgname.h"

#include "SireMol/molecule.h"

#include "SireMol/moleculegroup.h"

#include "SireMol/moleditor.h"

#include "SireMol/partialmolecule.h"

#include "SireMove/flexibility.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireSystem/system.h"

#include "SireUnits/convert.h"

#include "SireUnits/temperature.h"

#include "SireUnits/units.h"

#include "SireVol/periodicbox.h"

#include "ensemble.h"

#include "openmmmdintegrator.h"

#include <QDebug>

#include <QTime>

#include <iostream>

#include "openmmmdintegrator.h"

SireMove::OpenMMMDIntegrator __copy__(const SireMove::OpenMMMDIntegrator &other){ return SireMove::OpenMMMDIntegrator(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_OpenMMMDIntegrator_class(){

    { //::SireMove::OpenMMMDIntegrator
        typedef bp::class_< SireMove::OpenMMMDIntegrator, bp::bases< SireMove::Integrator, SireBase::Property > > OpenMMMDIntegrator_exposer_t;
        OpenMMMDIntegrator_exposer_t OpenMMMDIntegrator_exposer = OpenMMMDIntegrator_exposer_t( "OpenMMMDIntegrator", bp::init< bp::optional< bool > >(( bp::arg("frequent_save_velocities")=(bool)(false) )) );
        bp::scope OpenMMMDIntegrator_scope( OpenMMMDIntegrator_exposer );
        OpenMMMDIntegrator_exposer.def( bp::init< SireMol::MoleculeGroup const &, bp::optional< bool > >(( bp::arg("molecule_group"), bp::arg("frequent_save_velocities")=(bool)(false) )) );
        OpenMMMDIntegrator_exposer.def( bp::init< SireMove::OpenMMMDIntegrator const & >(( bp::arg("other") )) );
        { //::SireMove::OpenMMMDIntegrator::createWorkspace

            typedef ::SireMove::IntegratorWorkspacePtr ( ::SireMove::OpenMMMDIntegrator::*createWorkspace_function_type )( ::SireBase::PropertyMap const & ) const;
            createWorkspace_function_type createWorkspace_function_value( &::SireMove::OpenMMMDIntegrator::createWorkspace );

            OpenMMMDIntegrator_exposer.def(
                "createWorkspace"
                , createWorkspace_function_value
                , ( bp::arg("map")=SireBase::PropertyMap() ) );

        }
        { //::SireMove::OpenMMMDIntegrator::createWorkspace

            typedef ::SireMove::IntegratorWorkspacePtr ( ::SireMove::OpenMMMDIntegrator::*createWorkspace_function_type )( ::SireMol::MoleculeGroup const &,::SireBase::PropertyMap const & ) const;
            createWorkspace_function_type createWorkspace_function_value( &::SireMove::OpenMMMDIntegrator::createWorkspace );

            OpenMMMDIntegrator_exposer.def(
                "createWorkspace"
                , createWorkspace_function_value
                , ( bp::arg("molgroup"), bp::arg("map")=SireBase::PropertyMap() ) );

        }
        { //::SireMove::OpenMMMDIntegrator::ensemble

            typedef ::SireMove::Ensemble ( ::SireMove::OpenMMMDIntegrator::*ensemble_function_type )(  ) const;
            ensemble_function_type ensemble_function_value( &::SireMove::OpenMMMDIntegrator::ensemble );

            OpenMMMDIntegrator_exposer.def(
                "ensemble"
                , ensemble_function_value );

        }
        { //::SireMove::OpenMMMDIntegrator::getAndersen

            typedef bool ( ::SireMove::OpenMMMDIntegrator::*getAndersen_function_type )(  ) ;
            getAndersen_function_type getAndersen_function_value( &::SireMove::OpenMMMDIntegrator::getAndersen );

            OpenMMMDIntegrator_exposer.def(
                "getAndersen"
                , getAndersen_function_value );

        }
        { //::SireMove::OpenMMMDIntegrator::getAndersen_frequency

            typedef double ( ::SireMove::OpenMMMDIntegrator::*getAndersen_frequency_function_type )(  ) ;
            getAndersen_frequency_function_type getAndersen_frequency_function_value( &::SireMove::OpenMMMDIntegrator::getAndersen_frequency );

            OpenMMMDIntegrator_exposer.def(
                "getAndersen_frequency"
                , getAndersen_frequency_function_value );

        }
        { //::SireMove::OpenMMMDIntegrator::getBufferFrequency

            typedef int ( ::SireMove::OpenMMMDIntegrator::*getBufferFrequency_function_type )(  ) ;
            getBufferFrequency_function_type getBufferFrequency_function_value( &::SireMove::OpenMMMDIntegrator::getBufferFrequency );

            OpenMMMDIntegrator_exposer.def(
                "getBufferFrequency"
                , getBufferFrequency_function_value );

        }
        { //::SireMove::OpenMMMDIntegrator::getCMMremoval_frequency

            typedef int ( ::SireMove::OpenMMMDIntegrator::*getCMMremoval_frequency_function_type )(  ) ;
            getCMMremoval_frequency_function_type getCMMremoval_frequency_function_value( &::SireMove::OpenMMMDIntegrator::getCMMremoval_frequency );

            OpenMMMDIntegrator_exposer.def(
                "getCMMremoval_frequency"
                , getCMMremoval_frequency_function_value );

        }
        { //::SireMove::OpenMMMDIntegrator::getConstraintType

            typedef ::QString ( ::SireMove::OpenMMMDIntegrator::*getConstraintType_function_type )(  ) ;
            getConstraintType_function_type getConstraintType_function_value( &::SireMove::OpenMMMDIntegrator::getConstraintType );

            OpenMMMDIntegrator_exposer.def(
                "getConstraintType"
                , getConstraintType_function_value );

        }
        { //::SireMove::OpenMMMDIntegrator::getCutoffType

            typedef ::QString ( ::SireMove::OpenMMMDIntegrator::*getCutoffType_function_type )(  ) ;
            getCutoffType_function_type getCutoffType_function_value( &::SireMove::OpenMMMDIntegrator::getCutoffType );

            OpenMMMDIntegrator_exposer.def(
                "getCutoffType"
                , getCutoffType_function_value );

        }
        { //::SireMove::OpenMMMDIntegrator::getCutoff_distance

            typedef ::SireUnits::Dimension::Length ( ::SireMove::OpenMMMDIntegrator::*getCutoff_distance_function_type )(  ) ;
            getCutoff_distance_function_type getCutoff_distance_function_value( &::SireMove::OpenMMMDIntegrator::getCutoff_distance );

            OpenMMMDIntegrator_exposer.def(
                "getCutoff_distance"
                , getCutoff_distance_function_value );

        }
        { //::SireMove::OpenMMMDIntegrator::getDeviceIndex

            typedef ::QString ( ::SireMove::OpenMMMDIntegrator::*getDeviceIndex_function_type )(  ) ;
            getDeviceIndex_function_type getDeviceIndex_function_value( &::SireMove::OpenMMMDIntegrator::getDeviceIndex );

            OpenMMMDIntegrator_exposer.def(
                "getDeviceIndex"
                , getDeviceIndex_function_value );

        }
        { //::SireMove::OpenMMMDIntegrator::getEquilib_iterations

            typedef int ( ::SireMove::OpenMMMDIntegrator::*getEquilib_iterations_function_type )(  ) ;
            getEquilib_iterations_function_type getEquilib_iterations_function_value( &::SireMove::OpenMMMDIntegrator::getEquilib_iterations );

            OpenMMMDIntegrator_exposer.def(
                "getEquilib_iterations"
                , getEquilib_iterations_function_value );

        }
        { //::SireMove::OpenMMMDIntegrator::getEquilib_time_step

            typedef ::SireUnits::Dimension::Time ( ::SireMove::OpenMMMDIntegrator::*getEquilib_time_step_function_type )(  ) ;
            getEquilib_time_step_function_type getEquilib_time_step_function_value( &::SireMove::OpenMMMDIntegrator::getEquilib_time_step );

            OpenMMMDIntegrator_exposer.def(
                "getEquilib_time_step"
                , getEquilib_time_step_function_value );

        }
        { //::SireMove::OpenMMMDIntegrator::getField_dielectric

            typedef double ( ::SireMove::OpenMMMDIntegrator::*getField_dielectric_function_type )(  ) ;
            getField_dielectric_function_type getField_dielectric_function_value( &::SireMove::OpenMMMDIntegrator::getField_dielectric );

            OpenMMMDIntegrator_exposer.def(
                "getField_dielectric"
                , getField_dielectric_function_value );

        }
        { //::SireMove::OpenMMMDIntegrator::getFriction

            typedef ::SireUnits::Dimension::Time ( ::SireMove::OpenMMMDIntegrator::*getFriction_function_type )(  ) ;
            getFriction_function_type getFriction_function_value( &::SireMove::OpenMMMDIntegrator::getFriction );

            OpenMMMDIntegrator_exposer.def(
                "getFriction"
                , getFriction_function_value );

        }
        { //::SireMove::OpenMMMDIntegrator::getIntegration_tolerance

            typedef double ( ::SireMove::OpenMMMDIntegrator::*getIntegration_tolerance_function_type )(  ) ;
            getIntegration_tolerance_function_type getIntegration_tolerance_function_value( &::SireMove::OpenMMMDIntegrator::getIntegration_tolerance );

            OpenMMMDIntegrator_exposer.def(
                "getIntegration_tolerance"
                , getIntegration_tolerance_function_value );

        }
        { //::SireMove::OpenMMMDIntegrator::getIntegrator

            typedef ::QString ( ::SireMove::OpenMMMDIntegrator::*getIntegrator_function_type )(  ) ;
            getIntegrator_function_type getIntegrator_function_value( &::SireMove::OpenMMMDIntegrator::getIntegrator );

            OpenMMMDIntegrator_exposer.def(
                "getIntegrator"
                , getIntegrator_function_value );

        }
        { //::SireMove::OpenMMMDIntegrator::getLJDispersion

            typedef bool ( ::SireMove::OpenMMMDIntegrator::*getLJDispersion_function_type )(  ) ;
            getLJDispersion_function_type getLJDispersion_function_value( &::SireMove::OpenMMMDIntegrator::getLJDispersion );

            OpenMMMDIntegrator_exposer.def(
                "getLJDispersion"
                , getLJDispersion_function_value );

        }
        { //::SireMove::OpenMMMDIntegrator::getMCBarostat

            typedef bool ( ::SireMove::OpenMMMDIntegrator::*getMCBarostat_function_type )(  ) ;
            getMCBarostat_function_type getMCBarostat_function_value( &::SireMove::OpenMMMDIntegrator::getMCBarostat );

            OpenMMMDIntegrator_exposer.def(
                "getMCBarostat"
                , getMCBarostat_function_value );

        }
        { //::SireMove::OpenMMMDIntegrator::getMCBarostat_frequency

            typedef int ( ::SireMove::OpenMMMDIntegrator::*getMCBarostat_frequency_function_type )(  ) ;
            getMCBarostat_frequency_function_type getMCBarostat_frequency_function_value( &::SireMove::OpenMMMDIntegrator::getMCBarostat_frequency );

            OpenMMMDIntegrator_exposer.def(
                "getMCBarostat_frequency"
                , getMCBarostat_frequency_function_value );

        }
        { //::SireMove::OpenMMMDIntegrator::getMinimIterations

            typedef int ( ::SireMove::OpenMMMDIntegrator::*getMinimiseIterations_function_type )(  ) ;
            getMinimiseIterations_function_type getMinimiseIterations_function_value( &::SireMove::OpenMMMDIntegrator::getMinimiseIterations );

            OpenMMMDIntegrator_exposer.def(
                "getMinimiseIterations"
                , getMinimiseIterations_function_value );

        }
        { //::SireMove::OpenMMMDIntegrator::getMinimiseTol

            typedef double ( ::SireMove::OpenMMMDIntegrator::*getMinimiseTol_function_type )(  ) ;
            getMinimiseTol_function_type getMinimiseTol_function_value( &::SireMove::OpenMMMDIntegrator::getMinimiseTol );

            OpenMMMDIntegrator_exposer.def(
                "getMinimiseTol"
                , getMinimiseTol_function_value );

        }
        { //::SireMove::OpenMMMDIntegrator::getPlatform

            typedef ::QString ( ::SireMove::OpenMMMDIntegrator::*getPlatform_function_type )(  ) ;
            getPlatform_function_type getPlatform_function_value( &::SireMove::OpenMMMDIntegrator::getPlatform );

            OpenMMMDIntegrator_exposer.def(
                "getPlatform"
                , getPlatform_function_value );

        }
        { //::SireMove::OpenMMMDIntegrator::getPotentialEnergy

            typedef ::SireUnits::Dimension::MolarEnergy ( ::SireMove::OpenMMMDIntegrator::*getPotentialEnergy_function_type )( ::SireSystem::System const & ) ;
            getPotentialEnergy_function_type getPotentialEnergy_function_value( &::SireMove::OpenMMMDIntegrator::getPotentialEnergy );

            OpenMMMDIntegrator_exposer.def(
                "getPotentialEnergy"
                , getPotentialEnergy_function_value
                , ( bp::arg("system") ) );

        }
        { //::SireMove::OpenMMMDIntegrator::getPrecision

            typedef ::QString ( ::SireMove::OpenMMMDIntegrator::*getPrecision_function_type )(  ) ;
            getPrecision_function_type getPrecision_function_value( &::SireMove::OpenMMMDIntegrator::getPrecision );

            OpenMMMDIntegrator_exposer.def(
                "getPrecision"
                , getPrecision_function_value );

        }
        { //::SireMove::OpenMMMDIntegrator::getPressure

            typedef ::SireUnits::Dimension::Pressure ( ::SireMove::OpenMMMDIntegrator::*getPressure_function_type )(  ) ;
            getPressure_function_type getPressure_function_value( &::SireMove::OpenMMMDIntegrator::getPressure );

            OpenMMMDIntegrator_exposer.def(
                "getPressure"
                , getPressure_function_value );

        }
        { //::SireMove::OpenMMMDIntegrator::getRestraint

            typedef bool ( ::SireMove::OpenMMMDIntegrator::*getRestraint_function_type )(  ) ;
            getRestraint_function_type getRestraint_function_value( &::SireMove::OpenMMMDIntegrator::getRestraint );

            OpenMMMDIntegrator_exposer.def(
                "getRestraint"
                , getRestraint_function_value );

        }
        { //::SireMove::OpenMMMDIntegrator::getTemperature

            typedef ::SireUnits::Dimension::Temperature ( ::SireMove::OpenMMMDIntegrator::*getTemperature_function_type )(  ) ;
            getTemperature_function_type getTemperature_function_value( &::SireMove::OpenMMMDIntegrator::getTemperature );

            OpenMMMDIntegrator_exposer.def(
                "getTemperature"
                , getTemperature_function_value );

        }
        { //::SireMove::OpenMMMDIntegrator::getTimetoSkip

            typedef ::SireUnits::Dimension::Time ( ::SireMove::OpenMMMDIntegrator::*getTimetoSkip_function_type )(  ) ;
            getTimetoSkip_function_type getTimetoSkip_function_value( &::SireMove::OpenMMMDIntegrator::getTimetoSkip );

            OpenMMMDIntegrator_exposer.def(
                "getTimetoSkip"
                , getTimetoSkip_function_value );

        }
        { //::SireMove::OpenMMMDIntegrator::gettoleranceEwaldPME

            typedef double ( ::SireMove::OpenMMMDIntegrator::*gettoleranceEwaldPME_function_type )(  ) ;
            gettoleranceEwaldPME_function_type gettoleranceEwaldPME_function_value( &::SireMove::OpenMMMDIntegrator::gettoleranceEwaldPME );

            OpenMMMDIntegrator_exposer.def(
                "gettoleranceEwaldPME"
                , gettoleranceEwaldPME_function_value );

        }
        { //::SireMove::OpenMMMDIntegrator::initialise

            typedef void ( ::SireMove::OpenMMMDIntegrator::*initialise_function_type )(  ) ;
            initialise_function_type initialise_function_value( &::SireMove::OpenMMMDIntegrator::initialise );

            OpenMMMDIntegrator_exposer.def(
                "initialise"
                , initialise_function_value );

        }
        { //::SireMove::OpenMMMDIntegrator::integrate

            typedef void ( ::SireMove::OpenMMMDIntegrator::*integrate_function_type )( ::SireMove::IntegratorWorkspace &,::SireCAS::Symbol const &,::SireUnits::Dimension::Time,int,bool ) ;
            integrate_function_type integrate_function_value( &::SireMove::OpenMMMDIntegrator::integrate );

            OpenMMMDIntegrator_exposer.def(
                "integrate"
                , integrate_function_value
                , ( bp::arg("workspace"), bp::arg("nrg_component"), bp::arg("timestep"), bp::arg("nmoves"), bp::arg("record_stats") ) );

        }
        { //::SireMove::OpenMMMDIntegrator::isTimeReversible

            typedef bool ( ::SireMove::OpenMMMDIntegrator::*isTimeReversible_function_type )(  ) const;
            isTimeReversible_function_type isTimeReversible_function_value( &::SireMove::OpenMMMDIntegrator::isTimeReversible );

            OpenMMMDIntegrator_exposer.def(
                "isTimeReversible"
                , isTimeReversible_function_value );

        }
        OpenMMMDIntegrator_exposer.def( bp::self != bp::self );
        { //::SireMove::OpenMMMDIntegrator::operator=

            typedef ::SireMove::OpenMMMDIntegrator & ( ::SireMove::OpenMMMDIntegrator::*assign_function_type )( ::SireMove::OpenMMMDIntegrator const & ) ;
            assign_function_type assign_function_value( &::SireMove::OpenMMMDIntegrator::operator= );

            OpenMMMDIntegrator_exposer.def(
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );

        }
        OpenMMMDIntegrator_exposer.def( bp::self == bp::self );
        { //::SireMove::OpenMMMDIntegrator::setAndersen

            typedef void ( ::SireMove::OpenMMMDIntegrator::*setAndersen_function_type )( bool ) ;
            setAndersen_function_type setAndersen_function_value( &::SireMove::OpenMMMDIntegrator::setAndersen );

            OpenMMMDIntegrator_exposer.def(
                "setAndersen"
                , setAndersen_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMMDIntegrator::setAndersen_frequency

            typedef void ( ::SireMove::OpenMMMDIntegrator::*setAndersen_frequency_function_type )( double ) ;
            setAndersen_frequency_function_type setAndersen_frequency_function_value( &::SireMove::OpenMMMDIntegrator::setAndersen_frequency );

            OpenMMMDIntegrator_exposer.def(
                "setAndersen_frequency"
                , setAndersen_frequency_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMMDIntegrator::setBufferFrequency

            typedef void ( ::SireMove::OpenMMMDIntegrator::*setBufferFrequency_function_type )( int ) ;
            setBufferFrequency_function_type setBufferFrequency_function_value( &::SireMove::OpenMMMDIntegrator::setBufferFrequency );

            OpenMMMDIntegrator_exposer.def(
                "setBufferFrequency"
                , setBufferFrequency_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMMDIntegrator::setCMMremoval_frequency

            typedef void ( ::SireMove::OpenMMMDIntegrator::*setCMMremoval_frequency_function_type )( int ) ;
            setCMMremoval_frequency_function_type setCMMremoval_frequency_function_value( &::SireMove::OpenMMMDIntegrator::setCMMremoval_frequency );

            OpenMMMDIntegrator_exposer.def(
                "setCMMremoval_frequency"
                , setCMMremoval_frequency_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMMDIntegrator::setConstraintType

            typedef void ( ::SireMove::OpenMMMDIntegrator::*setConstraintType_function_type )( ::QString ) ;
            setConstraintType_function_type setConstraintType_function_value( &::SireMove::OpenMMMDIntegrator::setConstraintType );

            OpenMMMDIntegrator_exposer.def(
                "setConstraintType"
                , setConstraintType_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMMDIntegrator::setCutoffType

            typedef void ( ::SireMove::OpenMMMDIntegrator::*setCutoffType_function_type )( ::QString ) ;
            setCutoffType_function_type setCutoffType_function_value( &::SireMove::OpenMMMDIntegrator::setCutoffType );

            OpenMMMDIntegrator_exposer.def(
                "setCutoffType"
                , setCutoffType_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMMDIntegrator::setCutoff_distance

            typedef void ( ::SireMove::OpenMMMDIntegrator::*setCutoff_distance_function_type )( ::SireUnits::Dimension::Length ) ;
            setCutoff_distance_function_type setCutoff_distance_function_value( &::SireMove::OpenMMMDIntegrator::setCutoff_distance );

            OpenMMMDIntegrator_exposer.def(
                "setCutoff_distance"
                , setCutoff_distance_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMMDIntegrator::setDeviceIndex

            typedef void ( ::SireMove::OpenMMMDIntegrator::*setDeviceIndex_function_type )( ::QString ) ;
            setDeviceIndex_function_type setDeviceIndex_function_value( &::SireMove::OpenMMMDIntegrator::setDeviceIndex );

            OpenMMMDIntegrator_exposer.def(
                "setDeviceIndex"
                , setDeviceIndex_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMMDIntegrator::setEquilib_iterations

            typedef void ( ::SireMove::OpenMMMDIntegrator::*setEquilib_iterations_function_type )( int ) ;
            setEquilib_iterations_function_type setEquilib_iterations_function_value( &::SireMove::OpenMMMDIntegrator::setEquilib_iterations );

            OpenMMMDIntegrator_exposer.def(
                "setEquilib_iterations"
                , setEquilib_iterations_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMMDIntegrator::setEquilib_time_step

            typedef void ( ::SireMove::OpenMMMDIntegrator::*setEquilib_time_step_function_type )( ::SireUnits::Dimension::Time ) ;
            setEquilib_time_step_function_type setEquilib_time_step_function_value( &::SireMove::OpenMMMDIntegrator::setEquilib_time_step );

            OpenMMMDIntegrator_exposer.def(
                "setEquilib_time_step"
                , setEquilib_time_step_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMMDIntegrator::setField_dielectric

            typedef void ( ::SireMove::OpenMMMDIntegrator::*setField_dielectric_function_type )( double ) ;
            setField_dielectric_function_type setField_dielectric_function_value( &::SireMove::OpenMMMDIntegrator::setField_dielectric );

            OpenMMMDIntegrator_exposer.def(
                "setField_dielectric"
                , setField_dielectric_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMMDIntegrator::setFriction

            typedef void ( ::SireMove::OpenMMMDIntegrator::*setFriction_function_type )( ::SireUnits::Dimension::Time ) ;
            setFriction_function_type setFriction_function_value( &::SireMove::OpenMMMDIntegrator::setFriction );

            OpenMMMDIntegrator_exposer.def(
                "setFriction"
                , setFriction_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMMDIntegrator::setIntegration_tolerance

            typedef void ( ::SireMove::OpenMMMDIntegrator::*setIntegration_tolerance_function_type )( double ) ;
            setIntegration_tolerance_function_type setIntegration_tolerance_function_value( &::SireMove::OpenMMMDIntegrator::setIntegration_tolerance );

            OpenMMMDIntegrator_exposer.def(
                "setIntegration_tolerance"
                , setIntegration_tolerance_function_value
                , ( bp::arg("tolerance") ) );

        }
        { //::SireMove::OpenMMMDIntegrator::setIntegrator

            typedef void ( ::SireMove::OpenMMMDIntegrator::*setIntegrator_function_type )( ::QString ) ;
            setIntegrator_function_type setIntegrator_function_value( &::SireMove::OpenMMMDIntegrator::setIntegrator );

            OpenMMMDIntegrator_exposer.def(
                "setIntegrator"
                , setIntegrator_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMMDIntegrator::setLJDispersion

            typedef void ( ::SireMove::OpenMMMDIntegrator::*setLJDispersion_function_type )( bool ) ;
            setLJDispersion_function_type setLJDispersion_function_value( &::SireMove::OpenMMMDIntegrator::setLJDispersion );

            OpenMMMDIntegrator_exposer.def(
                "setLJDispersion"
                , setLJDispersion_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMMDIntegrator::setMCBarostat

            typedef void ( ::SireMove::OpenMMMDIntegrator::*setMCBarostat_function_type )( bool ) ;
            setMCBarostat_function_type setMCBarostat_function_value( &::SireMove::OpenMMMDIntegrator::setMCBarostat );

            OpenMMMDIntegrator_exposer.def(
                "setMCBarostat"
                , setMCBarostat_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMMDIntegrator::setMCBarostat_frequency

            typedef void ( ::SireMove::OpenMMMDIntegrator::*setMCBarostat_frequency_function_type )( int ) ;
            setMCBarostat_frequency_function_type setMCBarostat_frequency_function_value( &::SireMove::OpenMMMDIntegrator::setMCBarostat_frequency );

            OpenMMMDIntegrator_exposer.def(
                "setMCBarostat_frequency"
                , setMCBarostat_frequency_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMMDIntegrator::setMinimization

            typedef void ( ::SireMove::OpenMMMDIntegrator::*setMinimization_function_type )( bool ) ;
            setMinimization_function_type setMinimization_function_value( &::SireMove::OpenMMMDIntegrator::setMinimization );

            OpenMMMDIntegrator_exposer.def(
                "setMinimization"
                , setMinimization_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMMDIntegrator::setMinimiseIterations

            typedef void ( ::SireMove::OpenMMMDIntegrator::*setMinimiseIterations_function_type )( int ) ;
            setMinimiseIterations_function_type setMinimiseIterations_function_value( &::SireMove::OpenMMMDIntegrator::setMinimiseIterations );

            OpenMMMDIntegrator_exposer.def(
                "setMinimiseIterations"
                , setMinimiseIterations_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMMDIntegrator::setMinimiseTol

            typedef void ( ::SireMove::OpenMMMDIntegrator::*setMinimiseTol_function_type )( double ) ;
            setMinimiseTol_function_type setMinimiseTol_function_value( &::SireMove::OpenMMMDIntegrator::setMinimiseTol );

            OpenMMMDIntegrator_exposer.def(
                "setMinimiseTol"
                , setMinimiseTol_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMMDIntegrator::setPlatform

            typedef void ( ::SireMove::OpenMMMDIntegrator::*setPlatform_function_type )( ::QString ) ;
            setPlatform_function_type setPlatform_function_value( &::SireMove::OpenMMMDIntegrator::setPlatform );

            OpenMMMDIntegrator_exposer.def(
                "setPlatform"
                , setPlatform_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMMDIntegrator::setPrecision

            typedef void ( ::SireMove::OpenMMMDIntegrator::*setPrecision_function_type )( ::QString ) ;
            setPrecision_function_type setPrecision_function_value( &::SireMove::OpenMMMDIntegrator::setPrecision );

            OpenMMMDIntegrator_exposer.def(
                "setPrecision"
                , setPrecision_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMMDIntegrator::setPressure

            typedef void ( ::SireMove::OpenMMMDIntegrator::*setPressure_function_type )( ::SireUnits::Dimension::Pressure ) ;
            setPressure_function_type setPressure_function_value( &::SireMove::OpenMMMDIntegrator::setPressure );

            OpenMMMDIntegrator_exposer.def(
                "setPressure"
                , setPressure_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMMDIntegrator::setReinitialiseContext

            typedef void ( ::SireMove::OpenMMMDIntegrator::*setReinitialiseContext_function_type )( bool ) ;
            setReinitialiseContext_function_type setReinitialiseContext_function_value( &::SireMove::OpenMMMDIntegrator::setReinitialiseContext );

            OpenMMMDIntegrator_exposer.def(
                "setReinitialiseContext"
                , setReinitialiseContext_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMMDIntegrator::setRestraint

            typedef void ( ::SireMove::OpenMMMDIntegrator::*setRestraint_function_type )( bool ) ;
            setRestraint_function_type setRestraint_function_value( &::SireMove::OpenMMMDIntegrator::setRestraint );

            OpenMMMDIntegrator_exposer.def(
                "setRestraint"
                , setRestraint_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMMDIntegrator::setTemperature

            typedef void ( ::SireMove::OpenMMMDIntegrator::*setTemperature_function_type )( ::SireUnits::Dimension::Temperature ) ;
            setTemperature_function_type setTemperature_function_value( &::SireMove::OpenMMMDIntegrator::setTemperature );

            OpenMMMDIntegrator_exposer.def(
                "setTemperature"
                , setTemperature_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMMDIntegrator::setTimetoSkip

            typedef void ( ::SireMove::OpenMMMDIntegrator::*setTimetoSkip_function_type )( ::SireUnits::Dimension::Time ) ;
            setTimetoSkip_function_type setTimetoSkip_function_value( &::SireMove::OpenMMMDIntegrator::setTimetoSkip );

            OpenMMMDIntegrator_exposer.def(
                "setTimetoSkip"
                , setTimetoSkip_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMMDIntegrator::setToleranceEwaldPME

            typedef void ( ::SireMove::OpenMMMDIntegrator::*setToleranceEwaldPME_function_type )( double ) ;
            setToleranceEwaldPME_function_type setToleranceEwaldPME_function_value( &::SireMove::OpenMMMDIntegrator::setToleranceEwaldPME );

            OpenMMMDIntegrator_exposer.def(
                "setToleranceEwaldPME"
                , setToleranceEwaldPME_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::SireMove::OpenMMMDIntegrator::toString

            typedef ::QString ( ::SireMove::OpenMMMDIntegrator::*toString_function_type )(  ) const;
            toString_function_type toString_function_value( &::SireMove::OpenMMMDIntegrator::toString );

            OpenMMMDIntegrator_exposer.def(
                "toString"
                , toString_function_value );

        }
        { //::SireMove::OpenMMMDIntegrator::typeName

            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMove::OpenMMMDIntegrator::typeName );

            OpenMMMDIntegrator_exposer.def(
                "typeName"
                , typeName_function_value );

        }
        OpenMMMDIntegrator_exposer.staticmethod( "typeName" );
        OpenMMMDIntegrator_exposer.def( "__copy__", &__copy__);
        OpenMMMDIntegrator_exposer.def( "__deepcopy__", &__copy__);
        OpenMMMDIntegrator_exposer.def( "clone", &__copy__);
        OpenMMMDIntegrator_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMove::OpenMMMDIntegrator >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        OpenMMMDIntegrator_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMove::OpenMMMDIntegrator >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        OpenMMMDIntegrator_exposer.def( "__str__", &__str__< ::SireMove::OpenMMMDIntegrator > );
        OpenMMMDIntegrator_exposer.def( "__repr__", &__str__< ::SireMove::OpenMMMDIntegrator > );
    }

}
