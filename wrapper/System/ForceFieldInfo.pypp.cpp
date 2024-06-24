// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "ForceFieldInfo.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireMol/core.h"

#include "SireMol/molecule.h"

#include "SireMol/selectormol.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireSystem/system.h"

#include "SireUnits/units.h"

#include "SireVol/cartesian.h"

#include "forcefieldinfo.h"

#include "forcefieldinfo.h"

SireSystem::ForceFieldInfo __copy__(const SireSystem::ForceFieldInfo &other){ return SireSystem::ForceFieldInfo(other); }

#include "Helpers/copy.hpp"

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_ForceFieldInfo_class(){

    { //::SireSystem::ForceFieldInfo
        typedef bp::class_< SireSystem::ForceFieldInfo, bp::bases< SireBase::Property > > ForceFieldInfo_exposer_t;
        ForceFieldInfo_exposer_t ForceFieldInfo_exposer = ForceFieldInfo_exposer_t( "ForceFieldInfo", "This class can generate and hold all of the system-level information\nthat is needed to specify a forcefield, e.g. space, cutoff type,\ncutoff lengths etc.\n", bp::init< >("") );
        bp::scope ForceFieldInfo_scope( ForceFieldInfo_exposer );
        ForceFieldInfo_exposer.def( bp::init< SireSystem::System const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("system"), bp::arg("map")=SireBase::PropertyMap() ), "") );
        ForceFieldInfo_exposer.def( bp::init< SireMol::MoleculeView const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("mol"), bp::arg("map")=SireBase::PropertyMap() ), "") );
        ForceFieldInfo_exposer.def( bp::init< SireMol::SelectorMol const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("mols"), bp::arg("map")=SireBase::PropertyMap() ), "") );
        ForceFieldInfo_exposer.def( bp::init< SireSystem::ForceFieldInfo const & >(( bp::arg("other") ), "") );
        { //::SireSystem::ForceFieldInfo::cutoff
        
            typedef ::SireUnits::Dimension::Length ( ::SireSystem::ForceFieldInfo::*cutoff_function_type)(  ) const;
            cutoff_function_type cutoff_function_value( &::SireSystem::ForceFieldInfo::cutoff );
            
            ForceFieldInfo_exposer.def( 
                "cutoff"
                , cutoff_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireSystem::ForceFieldInfo::cutoffType
        
            typedef ::QString ( ::SireSystem::ForceFieldInfo::*cutoffType_function_type)(  ) const;
            cutoffType_function_type cutoffType_function_value( &::SireSystem::ForceFieldInfo::cutoffType );
            
            ForceFieldInfo_exposer.def( 
                "cutoffType"
                , cutoffType_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireSystem::ForceFieldInfo::cutoffTypes
        
            typedef ::QStringList ( *cutoffTypes_function_type )(  );
            cutoffTypes_function_type cutoffTypes_function_value( &::SireSystem::ForceFieldInfo::cutoffTypes );
            
            ForceFieldInfo_exposer.def( 
                "cutoffTypes"
                , cutoffTypes_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireSystem::ForceFieldInfo::detail
        
            typedef ::SireFF::FFDetail const & ( ::SireSystem::ForceFieldInfo::*detail_function_type)(  ) const;
            detail_function_type detail_function_value( &::SireSystem::ForceFieldInfo::detail );
            
            ForceFieldInfo_exposer.def( 
                "detail"
                , detail_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );
        
        }
        { //::SireSystem::ForceFieldInfo::getParameter
        
            typedef ::SireUnits::Dimension::GeneralUnit ( ::SireSystem::ForceFieldInfo::*getParameter_function_type)( ::QString const & ) const;
            getParameter_function_type getParameter_function_value( &::SireSystem::ForceFieldInfo::getParameter );
            
            ForceFieldInfo_exposer.def( 
                "getParameter"
                , getParameter_function_value
                , ( bp::arg("parameter") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireSystem::ForceFieldInfo::hasCutoff
        
            typedef bool ( ::SireSystem::ForceFieldInfo::*hasCutoff_function_type)(  ) const;
            hasCutoff_function_type hasCutoff_function_value( &::SireSystem::ForceFieldInfo::hasCutoff );
            
            ForceFieldInfo_exposer.def( 
                "hasCutoff"
                , hasCutoff_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireSystem::ForceFieldInfo::hasNoCutoff
        
            typedef bool ( ::SireSystem::ForceFieldInfo::*hasNoCutoff_function_type)(  ) const;
            hasNoCutoff_function_type hasNoCutoff_function_value( &::SireSystem::ForceFieldInfo::hasNoCutoff );
            
            ForceFieldInfo_exposer.def( 
                "hasNoCutoff"
                , hasNoCutoff_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        ForceFieldInfo_exposer.def( bp::self != bp::self );
        { //::SireSystem::ForceFieldInfo::operator=
        
            typedef ::SireSystem::ForceFieldInfo & ( ::SireSystem::ForceFieldInfo::*assign_function_type)( ::SireSystem::ForceFieldInfo const & ) ;
            assign_function_type assign_function_value( &::SireSystem::ForceFieldInfo::operator= );
            
            ForceFieldInfo_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        ForceFieldInfo_exposer.def( bp::self == bp::self );
        { //::SireSystem::ForceFieldInfo::parameters
        
            typedef ::SireBase::Properties ( ::SireSystem::ForceFieldInfo::*parameters_function_type)(  ) const;
            parameters_function_type parameters_function_value( &::SireSystem::ForceFieldInfo::parameters );
            
            ForceFieldInfo_exposer.def( 
                "parameters"
                , parameters_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireSystem::ForceFieldInfo::setCutoff
        
            typedef void ( ::SireSystem::ForceFieldInfo::*setCutoff_function_type)( ::SireUnits::Dimension::Length ) ;
            setCutoff_function_type setCutoff_function_value( &::SireSystem::ForceFieldInfo::setCutoff );
            
            ForceFieldInfo_exposer.def( 
                "setCutoff"
                , setCutoff_function_value
                , ( bp::arg("length") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireSystem::ForceFieldInfo::setCutoffType
        
            typedef void ( ::SireSystem::ForceFieldInfo::*setCutoffType_function_type)( ::QString ) ;
            setCutoffType_function_type setCutoffType_function_value( &::SireSystem::ForceFieldInfo::setCutoffType );
            
            ForceFieldInfo_exposer.def( 
                "setCutoffType"
                , setCutoffType_function_value
                , ( bp::arg("cutoff_type") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireSystem::ForceFieldInfo::setCutoffType
        
            typedef void ( ::SireSystem::ForceFieldInfo::*setCutoffType_function_type)( ::QString,::SireBase::PropertyMap const & ) ;
            setCutoffType_function_type setCutoffType_function_value( &::SireSystem::ForceFieldInfo::setCutoffType );
            
            ForceFieldInfo_exposer.def( 
                "setCutoffType"
                , setCutoffType_function_value
                , ( bp::arg("cutoff_type"), bp::arg("parameters") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireSystem::ForceFieldInfo::setDetail
        
            typedef void ( ::SireSystem::ForceFieldInfo::*setDetail_function_type)( ::SireFF::FFDetail const & ) ;
            setDetail_function_type setDetail_function_value( &::SireSystem::ForceFieldInfo::setDetail );
            
            ForceFieldInfo_exposer.def( 
                "setDetail"
                , setDetail_function_value
                , ( bp::arg("details") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireSystem::ForceFieldInfo::setLargestCutoff
        
            typedef void ( ::SireSystem::ForceFieldInfo::*setLargestCutoff_function_type)(  ) ;
            setLargestCutoff_function_type setLargestCutoff_function_value( &::SireSystem::ForceFieldInfo::setLargestCutoff );
            
            ForceFieldInfo_exposer.def( 
                "setLargestCutoff"
                , setLargestCutoff_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireSystem::ForceFieldInfo::setNoCutoff
        
            typedef void ( ::SireSystem::ForceFieldInfo::*setNoCutoff_function_type)(  ) ;
            setNoCutoff_function_type setNoCutoff_function_value( &::SireSystem::ForceFieldInfo::setNoCutoff );
            
            ForceFieldInfo_exposer.def( 
                "setNoCutoff"
                , setNoCutoff_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireSystem::ForceFieldInfo::setParameter
        
            typedef void ( ::SireSystem::ForceFieldInfo::*setParameter_function_type)( ::QString const &,::SireUnits::Dimension::GeneralUnit const & ) ;
            setParameter_function_type setParameter_function_value( &::SireSystem::ForceFieldInfo::setParameter );
            
            ForceFieldInfo_exposer.def( 
                "setParameter"
                , setParameter_function_value
                , ( bp::arg("parameter"), bp::arg("value") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireSystem::ForceFieldInfo::setSpace
        
            typedef void ( ::SireSystem::ForceFieldInfo::*setSpace_function_type)( ::SireVol::Space const & ) ;
            setSpace_function_type setSpace_function_value( &::SireSystem::ForceFieldInfo::setSpace );
            
            ForceFieldInfo_exposer.def( 
                "setSpace"
                , setSpace_function_value
                , ( bp::arg("space") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireSystem::ForceFieldInfo::space
        
            typedef ::SireVol::Space const & ( ::SireSystem::ForceFieldInfo::*space_function_type)(  ) const;
            space_function_type space_function_value( &::SireSystem::ForceFieldInfo::space );
            
            ForceFieldInfo_exposer.def( 
                "space"
                , space_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );
        
        }
        { //::SireSystem::ForceFieldInfo::toString
        
            typedef ::QString ( ::SireSystem::ForceFieldInfo::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireSystem::ForceFieldInfo::toString );
            
            ForceFieldInfo_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireSystem::ForceFieldInfo::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireSystem::ForceFieldInfo::typeName );
            
            ForceFieldInfo_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireSystem::ForceFieldInfo::what
        
            typedef char const * ( ::SireSystem::ForceFieldInfo::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireSystem::ForceFieldInfo::what );
            
            ForceFieldInfo_exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        ForceFieldInfo_exposer.staticmethod( "cutoffTypes" );
        ForceFieldInfo_exposer.staticmethod( "typeName" );
        ForceFieldInfo_exposer.def( "__copy__", &__copy__<SireSystem::ForceFieldInfo>);
        ForceFieldInfo_exposer.def( "__deepcopy__", &__copy__<SireSystem::ForceFieldInfo>);
        ForceFieldInfo_exposer.def( "clone", &__copy__<SireSystem::ForceFieldInfo>);
        ForceFieldInfo_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireSystem::ForceFieldInfo >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ForceFieldInfo_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireSystem::ForceFieldInfo >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ForceFieldInfo_exposer.def_pickle(sire_pickle_suite< ::SireSystem::ForceFieldInfo >());
        ForceFieldInfo_exposer.def( "__str__", &__str__< ::SireSystem::ForceFieldInfo > );
        ForceFieldInfo_exposer.def( "__repr__", &__str__< ::SireSystem::ForceFieldInfo > );
    }

}
