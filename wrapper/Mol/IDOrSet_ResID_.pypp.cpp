// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "IDOrSet_ResID_.pypp.hpp"

namespace bp = boost::python;

#include "SireMol/errors.h"

#include "SireStream/datastream.h"

#include "atom.h"

#include "chain.h"

#include "chainresid.h"

#include "cutgroup.h"

#include "editor.hpp"

#include "groupatomids.h"

#include "groupgroupids.h"

#include "moleculegroup.h"

#include "moleculegroups.h"

#include "molecules.h"

#include "molinfo.h"

#include "mover.hpp"

#include "partialmolecule.h"

#include "resid.h"

#include "residentifier.h"

#include "residue.h"

#include "segment.h"

#include "selector.hpp"

#include "tostring.h"

#include "withres.h"

#include "resid.h"

SireID::IDOrSet<SireMol::ResID> __copy__(const SireID::IDOrSet<SireMol::ResID> &other){ return SireID::IDOrSet<SireMol::ResID>(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_IDOrSet_ResID__class(){

    { //::SireID::IDOrSet< SireMol::ResID >
        typedef bp::class_< SireID::IDOrSet< SireMol::ResID >, bp::bases< SireMol::ResID, SireID::ID > > IDOrSet_ResID__exposer_t;
        IDOrSet_ResID__exposer_t IDOrSet_ResID__exposer = IDOrSet_ResID__exposer_t( "IDOrSet_ResID_", "", bp::init< >("") );
        bp::scope IDOrSet_ResID__scope( IDOrSet_ResID__exposer );
        IDOrSet_ResID__exposer.def( bp::init< SireMol::ResID const & >(( bp::arg("id") ), "") );
        IDOrSet_ResID__exposer.def( bp::init< SireMol::ResID const &, SireMol::ResID const & >(( bp::arg("id0"), bp::arg("id1") ), "") );
        IDOrSet_ResID__exposer.def( bp::init< QList< SireMol::ResIdentifier > const & >(( bp::arg("ids") ), "") );
        IDOrSet_ResID__exposer.def( bp::init< SireID::IDOrSet< SireMol::ResID > const & >(( bp::arg("ids") ), "") );
        IDOrSet_ResID__exposer.def( bp::init< SireID::IDOrSet< SireMol::ResID > const & >(( bp::arg("other") ), "") );
        { //::SireID::IDOrSet< SireMol::ResID >::IDs
        
            typedef SireID::IDOrSet< SireMol::ResID > exported_class_t;
            typedef ::QSet< SireMol::ResIdentifier > const & ( ::SireID::IDOrSet< SireMol::ResID >::*IDs_function_type)(  ) const;
            IDs_function_type IDs_function_value( &::SireID::IDOrSet< SireMol::ResID >::IDs );
            
            IDOrSet_ResID__exposer.def( 
                "IDs"
                , IDs_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireID::IDOrSet< SireMol::ResID >::hash
        
            typedef SireID::IDOrSet< SireMol::ResID > exported_class_t;
            typedef ::uint ( ::SireID::IDOrSet< SireMol::ResID >::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireID::IDOrSet< SireMol::ResID >::hash );
            
            IDOrSet_ResID__exposer.def( 
                "hash"
                , hash_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireID::IDOrSet< SireMol::ResID >::isNull
        
            typedef SireID::IDOrSet< SireMol::ResID > exported_class_t;
            typedef bool ( ::SireID::IDOrSet< SireMol::ResID >::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::SireID::IDOrSet< SireMol::ResID >::isNull );
            
            IDOrSet_ResID__exposer.def( 
                "isNull"
                , isNull_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireID::IDOrSet< SireMol::ResID >::map
        
            typedef SireID::IDOrSet< SireMol::ResID > exported_class_t;
            typedef ::QList< SireMol::ResIdx > ( ::SireID::IDOrSet< SireMol::ResID >::*map_function_type)( ::SireID::IDOrSet< SireMol::ResID >::SearchObject const & ) const;
            map_function_type map_function_value( &::SireID::IDOrSet< SireMol::ResID >::map );
            
            IDOrSet_ResID__exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("obj") )
                , bp::release_gil_policy()
                , "" );
        
        }
        IDOrSet_ResID__exposer.def( bp::self != bp::other< SireID::ID >() );
        IDOrSet_ResID__exposer.def( bp::self != bp::self );
        IDOrSet_ResID__exposer.def( bp::self != bp::other< SireMol::ResID >() );
        { //::SireID::IDOrSet< SireMol::ResID >::operator=
        
            typedef SireID::IDOrSet< SireMol::ResID > exported_class_t;
            typedef ::SireID::IDOrSet< SireMol::ResID > & ( ::SireID::IDOrSet< SireMol::ResID >::*assign_function_type)( ::SireID::IDOrSet< SireMol::ResID > const & ) ;
            assign_function_type assign_function_value( &::SireID::IDOrSet< SireMol::ResID >::operator= );
            
            IDOrSet_ResID__exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireID::IDOrSet< SireMol::ResID >::operator=
        
            typedef SireID::IDOrSet< SireMol::ResID > exported_class_t;
            typedef ::SireID::IDOrSet< SireMol::ResID > & ( ::SireID::IDOrSet< SireMol::ResID >::*assign_function_type)( ::SireMol::ResID const & ) ;
            assign_function_type assign_function_value( &::SireID::IDOrSet< SireMol::ResID >::operator= );
            
            IDOrSet_ResID__exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        IDOrSet_ResID__exposer.def( bp::self == bp::other< SireID::ID >() );
        IDOrSet_ResID__exposer.def( bp::self == bp::self );
        IDOrSet_ResID__exposer.def( bp::self == bp::other< SireMol::ResID >() );
        { //::SireID::IDOrSet< SireMol::ResID >::toString
        
            typedef SireID::IDOrSet< SireMol::ResID > exported_class_t;
            typedef ::QString ( ::SireID::IDOrSet< SireMol::ResID >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireID::IDOrSet< SireMol::ResID >::toString );
            
            IDOrSet_ResID__exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireID::IDOrSet< SireMol::ResID >::typeName
        
            typedef SireID::IDOrSet< SireMol::ResID > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireID::IDOrSet< SireMol::ResID >::typeName );
            
            IDOrSet_ResID__exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireID::IDOrSet< SireMol::ResID >::what
        
            typedef SireID::IDOrSet< SireMol::ResID > exported_class_t;
            typedef char const * ( ::SireID::IDOrSet< SireMol::ResID >::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireID::IDOrSet< SireMol::ResID >::what );
            
            IDOrSet_ResID__exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        IDOrSet_ResID__exposer.staticmethod( "typeName" );
        IDOrSet_ResID__exposer.def( "__copy__", &__copy__);
        IDOrSet_ResID__exposer.def( "__deepcopy__", &__copy__);
        IDOrSet_ResID__exposer.def( "clone", &__copy__);
        IDOrSet_ResID__exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireID::IDOrSet<SireMol::ResID> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        IDOrSet_ResID__exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireID::IDOrSet<SireMol::ResID> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        IDOrSet_ResID__exposer.def_pickle(sire_pickle_suite< ::SireID::IDOrSet<SireMol::ResID> >());
        IDOrSet_ResID__exposer.def( "__str__", &__str__< ::SireID::IDOrSet<SireMol::ResID> > );
        IDOrSet_ResID__exposer.def( "__repr__", &__str__< ::SireID::IDOrSet<SireMol::ResID> > );
        IDOrSet_ResID__exposer.def( "__hash__", &::SireID::IDOrSet<SireMol::ResID>::hash );
    }

}
