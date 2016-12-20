// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "GetCentroidPoint.pypp.hpp"

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

SireMove::GetCentroidPoint __copy__(const SireMove::GetCentroidPoint &other){ return SireMove::GetCentroidPoint(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_GetCentroidPoint_class(){

    { //::SireMove::GetCentroidPoint
        typedef bp::class_< SireMove::GetCentroidPoint, bp::bases< SireMove::GetPoint, SireBase::Property > > GetCentroidPoint_exposer_t;
        GetCentroidPoint_exposer_t GetCentroidPoint_exposer = GetCentroidPoint_exposer_t( "GetCentroidPoint", "This function returns the centroid of the\natoms in the passed view of the molecule\n\nAuthor: Christopher Woods\n", bp::init< >("Constructor") );
        bp::scope GetCentroidPoint_scope( GetCentroidPoint_exposer );
        GetCentroidPoint_exposer.def( bp::init< SireMol::AtomID const & >(( bp::arg("atomid") ), "Construct to get the centroid of the atoms in the molecule that match\nthe passed AtomID") );
        GetCentroidPoint_exposer.def( bp::init< SireMol::AtomID const &, SireMol::AtomID const & >(( bp::arg("atomid0"), bp::arg("atomid1") ), "Construct to get the centroid of the atoms in the molecule that\nmatch either of the two passed AtomIDs") );
        GetCentroidPoint_exposer.def( bp::init< QList< SireMol::AtomIdentifier > const & >(( bp::arg("atomids") ), "Construct to get the centroid of the atoms in the molecule that\nmatch any of the passed AtomIDs") );
        GetCentroidPoint_exposer.def( bp::init< SireMove::GetCentroidPoint const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMove::GetCentroidPoint::atomID
        
            typedef ::SireMol::AtomID const & ( ::SireMove::GetCentroidPoint::*atomID_function_type)(  ) const;
            atomID_function_type atomID_function_value( &::SireMove::GetCentroidPoint::atomID );
            
            GetCentroidPoint_exposer.def( 
                "atomID"
                , atomID_function_value
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the AtomID(s) used to limit the search for the point" );
        
        }
        { //::SireMove::GetCentroidPoint::getPoint
        
            typedef ::SireMaths::Vector ( ::SireMove::GetCentroidPoint::*getPoint_function_type)( ::SireMol::MoleculeView const &,::SireBase::PropertyMap const & ) const;
            getPoint_function_type getPoint_function_value( &::SireMove::GetCentroidPoint::getPoint );
            
            GetCentroidPoint_exposer.def( 
                "getPoint"
                , getPoint_function_value
                , ( bp::arg("molecule"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        GetCentroidPoint_exposer.def( bp::self != bp::self );
        { //::SireMove::GetCentroidPoint::operator=
        
            typedef ::SireMove::GetCentroidPoint & ( ::SireMove::GetCentroidPoint::*assign_function_type)( ::SireMove::GetCentroidPoint const & ) ;
            assign_function_type assign_function_value( &::SireMove::GetCentroidPoint::operator= );
            
            GetCentroidPoint_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        GetCentroidPoint_exposer.def( bp::self == bp::self );
        { //::SireMove::GetCentroidPoint::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMove::GetCentroidPoint::typeName );
            
            GetCentroidPoint_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        GetCentroidPoint_exposer.staticmethod( "typeName" );
        GetCentroidPoint_exposer.def( "__copy__", &__copy__);
        GetCentroidPoint_exposer.def( "__deepcopy__", &__copy__);
        GetCentroidPoint_exposer.def( "clone", &__copy__);
        GetCentroidPoint_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMove::GetCentroidPoint >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        GetCentroidPoint_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMove::GetCentroidPoint >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        GetCentroidPoint_exposer.def( "__str__", &__str__< ::SireMove::GetCentroidPoint > );
        GetCentroidPoint_exposer.def( "__repr__", &__str__< ::SireMove::GetCentroidPoint > );
    }

}