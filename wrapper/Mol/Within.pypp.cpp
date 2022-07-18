// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Within.pypp.hpp"

namespace bp = boost::python;

#include "SireMol/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireUnits/units.h"

#include "atom.h"

#include "atomcoords.h"

#include "molecule.h"

#include "moleculeview.h"

#include "mover.hpp"

#include "selector.hpp"

#include "within.h"

#include "within.h"

SireMol::Within __copy__(const SireMol::Within &other){ return SireMol::Within(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_Within_class(){

    { //::SireMol::Within
        typedef bp::class_< SireMol::Within, bp::bases< SireMol::AtomID, SireID::ID > > Within_exposer_t;
        Within_exposer_t Within_exposer = Within_exposer_t( "Within", "This is an atom identifier that identifies atoms\nbased on how far they are from other atoms, or\nfrom points in space\n\nAuthor: Christopher Woods\n", bp::init< >("Null constructor") );
        bp::scope Within_scope( Within_exposer );
        Within_exposer.def( bp::init< SireUnits::Dimension::Length, SireMaths::Vector const & >(( bp::arg("distance"), bp::arg("point") ), "Construct to match atoms within dist of point") );
        Within_exposer.def( bp::init< SireUnits::Dimension::Length, SireMol::AtomID const & >(( bp::arg("distance"), bp::arg("atomid") ), "Construct to match atoms within dist of the atoms\nfrom the molecule that match atomid") );
        Within_exposer.def( bp::init< SireMol::Within const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMol::Within::hash
        
            typedef ::uint ( ::SireMol::Within::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireMol::Within::hash );
            
            Within_exposer.def( 
                "hash"
                , hash_function_value
                , bp::release_gil_policy()
                , "Return a hash of this identifier" );
        
        }
        { //::SireMol::Within::isNull
        
            typedef bool ( ::SireMol::Within::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::SireMol::Within::isNull );
            
            Within_exposer.def( 
                "isNull"
                , isNull_function_value
                , bp::release_gil_policy()
                , "Is this selection null?" );
        
        }
        { //::SireMol::Within::map
        
            typedef ::QList< SireMol::AtomIdx > ( ::SireMol::Within::*map_function_type)( ::SireMol::MolInfo const & ) const;
            map_function_type map_function_value( &::SireMol::Within::map );
            
            Within_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("molinfo") )
                , bp::release_gil_policy()
                , "Map this ID to the list of indicies of atoms that match this ID\nNote that this function is not valid for this ID class, as\nwe need to have access to the molecular coordinates\nThrow: SireError::incompatible_error\n" );
        
        }
        { //::SireMol::Within::map
        
            typedef ::QList< SireMol::AtomIdx > ( ::SireMol::Within::*map_function_type)( ::SireMol::MoleculeView const &,::SireBase::PropertyMap const & ) const;
            map_function_type map_function_value( &::SireMol::Within::map );
            
            Within_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("molview"), bp::arg("map") )
                , bp::release_gil_policy()
                , "Map this ID to the list of atomidxs of specified atoms\nin the passed molecule\nThrow: SireMol::missing_atom\nThrow: SireError::invalid_index\n" );
        
        }
        Within_exposer.def( bp::self != bp::self );
        { //::SireMol::Within::operator=
        
            typedef ::SireMol::Within & ( ::SireMol::Within::*assign_function_type)( ::SireMol::Within const & ) ;
            assign_function_type assign_function_value( &::SireMol::Within::operator= );
            
            Within_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        Within_exposer.def( bp::self == bp::other< SireID::ID >() );
        Within_exposer.def( bp::self == bp::self );
        { //::SireMol::Within::toString
        
            typedef ::QString ( ::SireMol::Within::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::Within::toString );
            
            Within_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "Return a string representatio of this ID" );
        
        }
        { //::SireMol::Within::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::Within::typeName );
            
            Within_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Within::what
        
            typedef char const * ( ::SireMol::Within::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMol::Within::what );
            
            Within_exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        Within_exposer.staticmethod( "typeName" );
        Within_exposer.def( "__copy__", &__copy__);
        Within_exposer.def( "__deepcopy__", &__copy__);
        Within_exposer.def( "clone", &__copy__);
        Within_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::Within >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Within_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::Within >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Within_exposer.def_pickle(sire_pickle_suite< ::SireMol::Within >());
        Within_exposer.def( "__str__", &__str__< ::SireMol::Within > );
        Within_exposer.def( "__repr__", &__str__< ::SireMol::Within > );
        Within_exposer.def( "__hash__", &::SireMol::Within::hash );
    }

}
