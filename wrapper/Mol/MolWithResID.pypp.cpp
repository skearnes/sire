// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "MolWithResID.pypp.hpp"

namespace bp = boost::python;

#include "SireMol/errors.h"

#include "SireStream/shareddatastream.h"

#include "moleculegroup.h"

#include "moleculegroups.h"

#include "molecules.h"

#include "moleculeview.h"

#include "molwithresid.h"

#include "viewsofmol.h"

#include "molwithresid.h"

SireMol::MolWithResID __copy__(const SireMol::MolWithResID &other){ return SireMol::MolWithResID(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_MolWithResID_class(){

    { //::SireMol::MolWithResID
        typedef bp::class_< SireMol::MolWithResID, bp::bases< SireMol::MolID, SireID::ID > > MolWithResID_exposer_t;
        MolWithResID_exposer_t MolWithResID_exposer = MolWithResID_exposer_t( "MolWithResID", bp::init< >() );
        bp::scope MolWithResID_scope( MolWithResID_exposer );
        MolWithResID_exposer.def( bp::init< QString const & >(( bp::arg("resname") )) );
        MolWithResID_exposer.def( bp::init< int >(( bp::arg("resnum") )) );
        MolWithResID_exposer.def( bp::init< SireMol::ResID const & >(( bp::arg("resid") )) );
        MolWithResID_exposer.def( bp::init< QString const &, SireID::CaseSensitivity >(( bp::arg("resname"), bp::arg("case_sensitivity") )) );
        MolWithResID_exposer.def( bp::init< SireMol::MolWithResID const & >(( bp::arg("other") )) );
        { //::SireMol::MolWithResID::hash
        
            typedef ::uint ( ::SireMol::MolWithResID::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireMol::MolWithResID::hash );
            
            MolWithResID_exposer.def( 
                "hash"
                , hash_function_value );
        
        }
        { //::SireMol::MolWithResID::isNull
        
            typedef bool ( ::SireMol::MolWithResID::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::SireMol::MolWithResID::isNull );
            
            MolWithResID_exposer.def( 
                "isNull"
                , isNull_function_value );
        
        }
        { //::SireMol::MolWithResID::map
        
            typedef ::QList< SireMol::MolNum > ( ::SireMol::MolWithResID::*map_function_type)( ::SireMol::Molecules const & ) const;
            map_function_type map_function_value( &::SireMol::MolWithResID::map );
            
            MolWithResID_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("molecules") ) );
        
        }
        { //::SireMol::MolWithResID::map
        
            typedef ::QList< SireMol::MolNum > ( ::SireMol::MolWithResID::*map_function_type)( ::SireMol::MoleculeGroup const & ) const;
            map_function_type map_function_value( &::SireMol::MolWithResID::map );
            
            MolWithResID_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("molgroup") ) );
        
        }
        { //::SireMol::MolWithResID::map
        
            typedef ::QList< SireMol::MolNum > ( ::SireMol::MolWithResID::*map_function_type)( ::SireMol::MolGroupsBase const & ) const;
            map_function_type map_function_value( &::SireMol::MolWithResID::map );
            
            MolWithResID_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("molgroups") ) );
        
        }
        MolWithResID_exposer.def( bp::self != bp::self );
        { //::SireMol::MolWithResID::operator=
        
            typedef ::SireMol::MolWithResID & ( ::SireMol::MolWithResID::*assign_function_type)( ::SireMol::MolWithResID const & ) ;
            assign_function_type assign_function_value( &::SireMol::MolWithResID::operator= );
            
            MolWithResID_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        MolWithResID_exposer.def( bp::self == bp::other< SireID::ID >() );
        MolWithResID_exposer.def( bp::self == bp::self );
        { //::SireMol::MolWithResID::resID
        
            typedef ::SireMol::ResID const & ( ::SireMol::MolWithResID::*resID_function_type)(  ) const;
            resID_function_type resID_function_value( &::SireMol::MolWithResID::resID );
            
            MolWithResID_exposer.def( 
                "resID"
                , resID_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireMol::MolWithResID::toString
        
            typedef ::QString ( ::SireMol::MolWithResID::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::MolWithResID::toString );
            
            MolWithResID_exposer.def( 
                "toString"
                , toString_function_value );
        
        }
        { //::SireMol::MolWithResID::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::MolWithResID::typeName );
            
            MolWithResID_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        { //::SireMol::MolWithResID::what
        
            typedef char const * ( ::SireMol::MolWithResID::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMol::MolWithResID::what );
            
            MolWithResID_exposer.def( 
                "what"
                , what_function_value );
        
        }
        MolWithResID_exposer.staticmethod( "typeName" );
        MolWithResID_exposer.def( "__copy__", &__copy__);
        MolWithResID_exposer.def( "__deepcopy__", &__copy__);
        MolWithResID_exposer.def( "clone", &__copy__);
        MolWithResID_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::MolWithResID >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        MolWithResID_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::MolWithResID >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        MolWithResID_exposer.def( "__str__", &__str__< ::SireMol::MolWithResID > );
        MolWithResID_exposer.def( "__repr__", &__str__< ::SireMol::MolWithResID > );
    }

}
