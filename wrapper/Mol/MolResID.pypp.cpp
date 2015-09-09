// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "MolResID.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireMol/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "moleculegroup.h"

#include "moleculegroups.h"

#include "molresid.h"

#include "residue.h"

#include "selector.hpp"

#include <QDebug>

#include "molresid.h"

SireMol::MolResID __copy__(const SireMol::MolResID &other){ return SireMol::MolResID(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_MolResID_class(){

    { //::SireMol::MolResID
        typedef bp::class_< SireMol::MolResID, bp::bases< SireMol::ResID, SireID::ID > > MolResID_exposer_t;
        MolResID_exposer_t MolResID_exposer = MolResID_exposer_t( "MolResID", bp::init< >() );
        bp::scope MolResID_scope( MolResID_exposer );
        MolResID_exposer.def( bp::init< SireMol::MolID const &, SireMol::ResID const & >(( bp::arg("molid"), bp::arg("resid") )) );
        MolResID_exposer.def( bp::init< SireMol::ResID const &, SireMol::MolID const & >(( bp::arg("resid"), bp::arg("molid") )) );
        MolResID_exposer.def( bp::init< boost::tuples::tuple< SireMol::MolIdentifier, SireMol::ResIdentifier, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type > const & >(( bp::arg("molresid") )) );
        MolResID_exposer.def( bp::init< boost::tuples::tuple< SireMol::ResIdentifier, SireMol::MolIdentifier, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type > const & >(( bp::arg("molresid") )) );
        MolResID_exposer.def( bp::init< SireMol::MolResNum const & >(( bp::arg("molresnum") )) );
        MolResID_exposer.def( bp::init< SireMol::MolResID const & >(( bp::arg("other") )) );
        { //::SireMol::MolResID::hash
        
            typedef ::uint ( ::SireMol::MolResID::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireMol::MolResID::hash );
            
            MolResID_exposer.def( 
                "hash"
                , hash_function_value );
        
        }
        { //::SireMol::MolResID::isNull
        
            typedef bool ( ::SireMol::MolResID::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::SireMol::MolResID::isNull );
            
            MolResID_exposer.def( 
                "isNull"
                , isNull_function_value );
        
        }
        { //::SireMol::MolResID::map
        
            typedef ::QList< SireMol::ResIdx > ( ::SireMol::MolResID::*map_function_type)( ::SireMol::MolInfo const & ) const;
            map_function_type map_function_value( &::SireMol::MolResID::map );
            
            MolResID_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("molinfo") ) );
        
        }
        { //::SireMol::MolResID::molID
        
            typedef ::SireMol::MolID const & ( ::SireMol::MolResID::*molID_function_type)(  ) const;
            molID_function_type molID_function_value( &::SireMol::MolResID::molID );
            
            MolResID_exposer.def( 
                "molID"
                , molID_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        MolResID_exposer.def( bp::self != bp::self );
        { //::SireMol::MolResID::operator=
        
            typedef ::SireMol::MolResID & ( ::SireMol::MolResID::*assign_function_type)( ::SireMol::MolResID const & ) ;
            assign_function_type assign_function_value( &::SireMol::MolResID::operator= );
            
            MolResID_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        MolResID_exposer.def( bp::self == bp::other< SireID::ID >() );
        MolResID_exposer.def( bp::self == bp::self );
        { //::SireMol::MolResID::resID
        
            typedef ::SireMol::ResID const & ( ::SireMol::MolResID::*resID_function_type)(  ) const;
            resID_function_type resID_function_value( &::SireMol::MolResID::resID );
            
            MolResID_exposer.def( 
                "resID"
                , resID_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireMol::MolResID::selectAllFrom
        
            typedef ::QHash< SireMol::MolNum, SireMol::Selector< SireMol::Residue > > ( ::SireMol::MolResID::*selectAllFrom_function_type)( ::SireMol::Molecules const &,::SireBase::PropertyMap const & ) const;
            selectAllFrom_function_type selectAllFrom_function_value( &::SireMol::MolResID::selectAllFrom );
            
            MolResID_exposer.def( 
                "selectAllFrom"
                , selectAllFrom_function_value
                , ( bp::arg("molecules"), bp::arg("map")=SireBase::PropertyMap() ) );
        
        }
        { //::SireMol::MolResID::selectAllFrom
        
            typedef ::QHash< SireMol::MolNum, SireMol::Selector< SireMol::Residue > > ( ::SireMol::MolResID::*selectAllFrom_function_type)( ::SireMol::MoleculeGroup const &,::SireBase::PropertyMap const & ) const;
            selectAllFrom_function_type selectAllFrom_function_value( &::SireMol::MolResID::selectAllFrom );
            
            MolResID_exposer.def( 
                "selectAllFrom"
                , selectAllFrom_function_value
                , ( bp::arg("molgroup"), bp::arg("map")=SireBase::PropertyMap() ) );
        
        }
        { //::SireMol::MolResID::selectAllFrom
        
            typedef ::QHash< SireMol::MolNum, SireMol::Selector< SireMol::Residue > > ( ::SireMol::MolResID::*selectAllFrom_function_type)( ::SireMol::MolGroupsBase const &,::SireBase::PropertyMap const & ) const;
            selectAllFrom_function_type selectAllFrom_function_value( &::SireMol::MolResID::selectAllFrom );
            
            MolResID_exposer.def( 
                "selectAllFrom"
                , selectAllFrom_function_value
                , ( bp::arg("molgroups"), bp::arg("map")=SireBase::PropertyMap() ) );
        
        }
        { //::SireMol::MolResID::toString
        
            typedef ::QString ( ::SireMol::MolResID::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::MolResID::toString );
            
            MolResID_exposer.def( 
                "toString"
                , toString_function_value );
        
        }
        { //::SireMol::MolResID::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::MolResID::typeName );
            
            MolResID_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        { //::SireMol::MolResID::what
        
            typedef char const * ( ::SireMol::MolResID::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMol::MolResID::what );
            
            MolResID_exposer.def( 
                "what"
                , what_function_value );
        
        }
        MolResID_exposer.staticmethod( "typeName" );
        MolResID_exposer.def( "__copy__", &__copy__);
        MolResID_exposer.def( "__deepcopy__", &__copy__);
        MolResID_exposer.def( "clone", &__copy__);
        MolResID_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::MolResID >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        MolResID_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::MolResID >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        MolResID_exposer.def( "__str__", &__str__< ::SireMol::MolResID > );
        MolResID_exposer.def( "__repr__", &__str__< ::SireMol::MolResID > );
    }

}
