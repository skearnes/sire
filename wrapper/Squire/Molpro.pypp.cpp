// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Molpro.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/findexe.h"

#include "SireBase/process.h"

#include "SireBase/tempdir.h"

#include "SireError/errors.h"

#include "SireFF/potentialtable.h"

#include "SireMM/cljprobe.h"

#include "SireMaths/vector.h"

#include "SireMol/element.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireUnits/units.h"

#include "SireVol/grid.h"

#include "latticecharges.h"

#include "molpro.h"

#include "qmpotential.h"

#include "tostring.h"

#include <QDebug>

#include <QTime>

#include "molpro.h"

Squire::Molpro __copy__(const Squire::Molpro &other){ return Squire::Molpro(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_Molpro_class(){

    { //::Squire::Molpro
        typedef bp::class_< Squire::Molpro, bp::bases< Squire::QMProgram, SireBase::Property > > Molpro_exposer_t;
        Molpro_exposer_t Molpro_exposer = Molpro_exposer_t( "Molpro", bp::init< >() );
        bp::scope Molpro_scope( Molpro_exposer );
        Molpro_exposer.def( bp::init< QString const & >(( bp::arg("molpro") )) );
        Molpro_exposer.def( bp::init< Squire::Molpro const & >(( bp::arg("other") )) );
        { //::Squire::Molpro::basisSet
        
            typedef ::QString const & ( ::Squire::Molpro::*basisSet_function_type)(  ) const;
            basisSet_function_type basisSet_function_value( &::Squire::Molpro::basisSet );
            
            Molpro_exposer.def( 
                "basisSet"
                , basisSet_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::Squire::Molpro::energyTemplate
        
            typedef ::QString const & ( ::Squire::Molpro::*energyTemplate_function_type)(  ) const;
            energyTemplate_function_type energyTemplate_function_value( &::Squire::Molpro::energyTemplate );
            
            Molpro_exposer.def( 
                "energyTemplate"
                , energyTemplate_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::Squire::Molpro::environment
        
            typedef ::QHash< QString, QString > const & ( ::Squire::Molpro::*environment_function_type)(  ) const;
            environment_function_type environment_function_value( &::Squire::Molpro::environment );
            
            Molpro_exposer.def( 
                "environment"
                , environment_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::Squire::Molpro::environment
        
            typedef ::QString ( ::Squire::Molpro::*environment_function_type)( ::QString const & ) const;
            environment_function_type environment_function_value( &::Squire::Molpro::environment );
            
            Molpro_exposer.def( 
                "environment"
                , environment_function_value
                , ( bp::arg("variable") ) );
        
        }
        { //::Squire::Molpro::executable
        
            typedef ::QString ( ::Squire::Molpro::*executable_function_type)(  ) const;
            executable_function_type executable_function_value( &::Squire::Molpro::executable );
            
            Molpro_exposer.def( 
                "executable"
                , executable_function_value );
        
        }
        { //::Squire::Molpro::forceTemplate
        
            typedef ::QString const & ( ::Squire::Molpro::*forceTemplate_function_type)(  ) const;
            forceTemplate_function_type forceTemplate_function_value( &::Squire::Molpro::forceTemplate );
            
            Molpro_exposer.def( 
                "forceTemplate"
                , forceTemplate_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::Squire::Molpro::latticeInBohrRadii
        
            typedef bool ( ::Squire::Molpro::*latticeInBohrRadii_function_type)(  ) const;
            latticeInBohrRadii_function_type latticeInBohrRadii_function_value( &::Squire::Molpro::latticeInBohrRadii );
            
            Molpro_exposer.def( 
                "latticeInBohrRadii"
                , latticeInBohrRadii_function_value );
        
        }
        { //::Squire::Molpro::maximumRunTime
        
            typedef int ( ::Squire::Molpro::*maximumRunTime_function_type)(  ) const;
            maximumRunTime_function_type maximumRunTime_function_value( &::Squire::Molpro::maximumRunTime );
            
            Molpro_exposer.def( 
                "maximumRunTime"
                , maximumRunTime_function_value );
        
        }
        { //::Squire::Molpro::memoryRequirement
        
            typedef int ( ::Squire::Molpro::*memoryRequirement_function_type)(  ) const;
            memoryRequirement_function_type memoryRequirement_function_value( &::Squire::Molpro::memoryRequirement );
            
            Molpro_exposer.def( 
                "memoryRequirement"
                , memoryRequirement_function_value );
        
        }
        { //::Squire::Molpro::method
        
            typedef ::QString const & ( ::Squire::Molpro::*method_function_type)(  ) const;
            method_function_type method_function_value( &::Squire::Molpro::method );
            
            Molpro_exposer.def( 
                "method"
                , method_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        Molpro_exposer.def( bp::self != bp::self );
        { //::Squire::Molpro::operator=
        
            typedef ::Squire::Molpro & ( ::Squire::Molpro::*assign_function_type)( ::Squire::Molpro const & ) ;
            assign_function_type assign_function_value( &::Squire::Molpro::operator= );
            
            Molpro_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        Molpro_exposer.def( bp::self == bp::self );
        { //::Squire::Molpro::setBasisSet
        
            typedef void ( ::Squire::Molpro::*setBasisSet_function_type)( ::QString const & ) ;
            setBasisSet_function_type setBasisSet_function_value( &::Squire::Molpro::setBasisSet );
            
            Molpro_exposer.def( 
                "setBasisSet"
                , setBasisSet_function_value
                , ( bp::arg("basis_set") ) );
        
        }
        { //::Squire::Molpro::setEnergyTemplate
        
            typedef void ( ::Squire::Molpro::*setEnergyTemplate_function_type)( ::QString const & ) ;
            setEnergyTemplate_function_type setEnergyTemplate_function_value( &::Squire::Molpro::setEnergyTemplate );
            
            Molpro_exposer.def( 
                "setEnergyTemplate"
                , setEnergyTemplate_function_value
                , ( bp::arg("energy_template") ) );
        
        }
        { //::Squire::Molpro::setEnvironment
        
            typedef void ( ::Squire::Molpro::*setEnvironment_function_type)( ::QString const &,::QString const & ) ;
            setEnvironment_function_type setEnvironment_function_value( &::Squire::Molpro::setEnvironment );
            
            Molpro_exposer.def( 
                "setEnvironment"
                , setEnvironment_function_value
                , ( bp::arg("variable"), bp::arg("value") ) );
        
        }
        { //::Squire::Molpro::setExecutable
        
            typedef void ( ::Squire::Molpro::*setExecutable_function_type)( ::QString const & ) ;
            setExecutable_function_type setExecutable_function_value( &::Squire::Molpro::setExecutable );
            
            Molpro_exposer.def( 
                "setExecutable"
                , setExecutable_function_value
                , ( bp::arg("molpro_exe") ) );
        
        }
        { //::Squire::Molpro::setForceTemplate
        
            typedef void ( ::Squire::Molpro::*setForceTemplate_function_type)( ::QString const & ) ;
            setForceTemplate_function_type setForceTemplate_function_value( &::Squire::Molpro::setForceTemplate );
            
            Molpro_exposer.def( 
                "setForceTemplate"
                , setForceTemplate_function_value
                , ( bp::arg("force_template") ) );
        
        }
        { //::Squire::Molpro::setLatticeInBohrRadii
        
            typedef void ( ::Squire::Molpro::*setLatticeInBohrRadii_function_type)( bool ) ;
            setLatticeInBohrRadii_function_type setLatticeInBohrRadii_function_value( &::Squire::Molpro::setLatticeInBohrRadii );
            
            Molpro_exposer.def( 
                "setLatticeInBohrRadii"
                , setLatticeInBohrRadii_function_value
                , ( bp::arg("on") ) );
        
        }
        { //::Squire::Molpro::setMaximumRunTime
        
            typedef void ( ::Squire::Molpro::*setMaximumRunTime_function_type)( int ) ;
            setMaximumRunTime_function_type setMaximumRunTime_function_value( &::Squire::Molpro::setMaximumRunTime );
            
            Molpro_exposer.def( 
                "setMaximumRunTime"
                , setMaximumRunTime_function_value
                , ( bp::arg("max_runtime") ) );
        
        }
        { //::Squire::Molpro::setMemoryRequirement
        
            typedef void ( ::Squire::Molpro::*setMemoryRequirement_function_type)( int ) ;
            setMemoryRequirement_function_type setMemoryRequirement_function_value( &::Squire::Molpro::setMemoryRequirement );
            
            Molpro_exposer.def( 
                "setMemoryRequirement"
                , setMemoryRequirement_function_value
                , ( bp::arg("nbytes") ) );
        
        }
        { //::Squire::Molpro::setMethod
        
            typedef void ( ::Squire::Molpro::*setMethod_function_type)( ::QString const & ) ;
            setMethod_function_type setMethod_function_value( &::Squire::Molpro::setMethod );
            
            Molpro_exposer.def( 
                "setMethod"
                , setMethod_function_value
                , ( bp::arg("method") ) );
        
        }
        { //::Squire::Molpro::setTotalCharge
        
            typedef void ( ::Squire::Molpro::*setTotalCharge_function_type)( int ) ;
            setTotalCharge_function_type setTotalCharge_function_value( &::Squire::Molpro::setTotalCharge );
            
            Molpro_exposer.def( 
                "setTotalCharge"
                , setTotalCharge_function_value
                , ( bp::arg("charge") ) );
        
        }
        { //::Squire::Molpro::supportsLatticeCharges
        
            typedef bool ( ::Squire::Molpro::*supportsLatticeCharges_function_type)(  ) const;
            supportsLatticeCharges_function_type supportsLatticeCharges_function_value( &::Squire::Molpro::supportsLatticeCharges );
            
            Molpro_exposer.def( 
                "supportsLatticeCharges"
                , supportsLatticeCharges_function_value );
        
        }
        { //::Squire::Molpro::toString
        
            typedef ::QString ( ::Squire::Molpro::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::Squire::Molpro::toString );
            
            Molpro_exposer.def( 
                "toString"
                , toString_function_value );
        
        }
        { //::Squire::Molpro::totalCharge
        
            typedef int ( ::Squire::Molpro::*totalCharge_function_type)(  ) const;
            totalCharge_function_type totalCharge_function_value( &::Squire::Molpro::totalCharge );
            
            Molpro_exposer.def( 
                "totalCharge"
                , totalCharge_function_value );
        
        }
        { //::Squire::Molpro::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::Squire::Molpro::typeName );
            
            Molpro_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        Molpro_exposer.staticmethod( "typeName" );
        Molpro_exposer.def( "__copy__", &__copy__);
        Molpro_exposer.def( "__deepcopy__", &__copy__);
        Molpro_exposer.def( "clone", &__copy__);
        Molpro_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::Squire::Molpro >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Molpro_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::Squire::Molpro >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Molpro_exposer.def( "__str__", &__str__< ::Squire::Molpro > );
        Molpro_exposer.def( "__repr__", &__str__< ::Squire::Molpro > );
    }

}
