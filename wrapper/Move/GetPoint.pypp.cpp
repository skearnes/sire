// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "GetPoint.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireMaths/vector.h"

#include "SireMol/atom.h"

#include "SireMol/atomcoords.h"

#include "SireMol/evaluator.h"

#include "SireMol/moleculeview.h"

#include "SireMol/mover.hpp"

#include "SireMol/selector.hpp"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "getpoint.h"

#include <QDebug>

#include "getpoint.h"

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_GetPoint_class(){

    { //::SireMove::GetPoint
        typedef bp::class_< SireMove::GetPoint, bp::bases< SireBase::Property >, boost::noncopyable > GetPoint_exposer_t;
        GetPoint_exposer_t GetPoint_exposer = GetPoint_exposer_t( "GetPoint", "This is the base class of the function objects that are\nused to return the coordinates of a point in space based\non the passed PartialMolecule. This is used, for example,\nto find the center of rotation of a set of atoms\n\nAuthor: Christopher Woods\n", bp::no_init );
        bp::scope GetPoint_scope( GetPoint_exposer );
        { //::SireMove::GetPoint::getPoint
        
            typedef ::SireMaths::Vector ( ::SireMove::GetPoint::*getPoint_function_type)( ::SireMol::MoleculeView const &,::SireBase::PropertyMap const & ) const;
            getPoint_function_type getPoint_function_value( &::SireMove::GetPoint::getPoint );
            
            GetPoint_exposer.def( 
                "getPoint"
                , getPoint_function_value
                , ( bp::arg("molecule"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMove::GetPoint::null
        
            typedef ::SireMove::NullGetPoint ( *null_function_type )(  );
            null_function_type null_function_value( &::SireMove::GetPoint::null );
            
            GetPoint_exposer.def( 
                "null"
                , null_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMove::GetPoint::operator()
        
            typedef ::SireMaths::Vector ( ::SireMove::GetPoint::*__call___function_type)( ::SireMol::MoleculeView const & ) const;
            __call___function_type __call___function_value( &::SireMove::GetPoint::operator() );
            
            GetPoint_exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("molecule") )
                , "" );
        
        }
        { //::SireMove::GetPoint::operator()
        
            typedef ::SireMaths::Vector ( ::SireMove::GetPoint::*__call___function_type)( ::SireMol::MoleculeView const &,::SireBase::PropertyMap const & ) const;
            __call___function_type __call___function_value( &::SireMove::GetPoint::operator() );
            
            GetPoint_exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("molecule"), bp::arg("map") )
                , "" );
        
        }
        { //::SireMove::GetPoint::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMove::GetPoint::typeName );
            
            GetPoint_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        GetPoint_exposer.staticmethod( "null" );
        GetPoint_exposer.staticmethod( "typeName" );
        GetPoint_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMove::GetPoint >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        GetPoint_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMove::GetPoint >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        GetPoint_exposer.def_pickle(sire_pickle_suite< ::SireMove::GetPoint >());
        GetPoint_exposer.def( "__str__", &__str__< ::SireMove::GetPoint > );
        GetPoint_exposer.def( "__repr__", &__str__< ::SireMove::GetPoint > );
    }

}
