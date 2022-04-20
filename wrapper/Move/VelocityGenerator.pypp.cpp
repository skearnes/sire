// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "VelocityGenerator.pypp.hpp"

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

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_VelocityGenerator_class(){

    { //::SireMove::VelocityGenerator
        typedef bp::class_< SireMove::VelocityGenerator, bp::bases< SireBase::Property >, boost::noncopyable > VelocityGenerator_exposer_t;
        VelocityGenerator_exposer_t VelocityGenerator_exposer = VelocityGenerator_exposer_t( "VelocityGenerator", "This is the base class of generators that are used\nto get velocities for molecules\n\nAuthor: Christopher Woods\n", bp::no_init );
        bp::scope VelocityGenerator_scope( VelocityGenerator_exposer );
        { //::SireMove::VelocityGenerator::generate
        
            typedef ::SireMol::AtomVelocities ( ::SireMove::VelocityGenerator::*generate_function_type)( ::SireMol::MoleculeView const &,::SireBase::PropertyMap const & ) const;
            generate_function_type generate_function_value( &::SireMove::VelocityGenerator::generate );
            
            VelocityGenerator_exposer.def( 
                "generate"
                , generate_function_value
                , ( bp::arg("molview"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMove::VelocityGenerator::null
        
            typedef ::SireMove::NullVelocityGenerator const & ( *null_function_type )(  );
            null_function_type null_function_value( &::SireMove::VelocityGenerator::null );
            
            VelocityGenerator_exposer.def( 
                "null"
                , null_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the global null generator" );
        
        }
        { //::SireMove::VelocityGenerator::setGenerator
        
            typedef void ( ::SireMove::VelocityGenerator::*setGenerator_function_type)( ::SireMaths::RanGenerator const & ) ;
            setGenerator_function_type setGenerator_function_value( &::SireMove::VelocityGenerator::setGenerator );
            
            VelocityGenerator_exposer.def( 
                "setGenerator"
                , setGenerator_function_value
                , ( bp::arg("generator") )
                , bp::release_gil_policy()
                , "Set the random number generator that may be used to help\ngenerate the initial velocities" );
        
        }
        { //::SireMove::VelocityGenerator::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMove::VelocityGenerator::typeName );
            
            VelocityGenerator_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        VelocityGenerator_exposer.staticmethod( "null" );
        VelocityGenerator_exposer.staticmethod( "typeName" );
        VelocityGenerator_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMove::VelocityGenerator >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        VelocityGenerator_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMove::VelocityGenerator >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        VelocityGenerator_exposer.def_pickle(sire_pickle_suite< ::SireMove::VelocityGenerator >());
        VelocityGenerator_exposer.def( "__str__", &__str__< ::SireMove::VelocityGenerator > );
        VelocityGenerator_exposer.def( "__repr__", &__str__< ::SireMove::VelocityGenerator > );
    }

}
