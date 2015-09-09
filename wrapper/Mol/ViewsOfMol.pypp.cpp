// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "ViewsOfMol.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireMol/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "atom.h"

#include "chain.h"

#include "cutgroup.h"

#include "editor.hpp"

#include "molecule.h"

#include "mover.hpp"

#include "partialmolecule.h"

#include "residue.h"

#include "segment.h"

#include "selector.hpp"

#include "tostring.h"

#include "viewsofmol.h"

#include <QDebug>

#include "viewsofmol.h"

SireMol::ViewsOfMol __copy__(const SireMol::ViewsOfMol &other){ return SireMol::ViewsOfMol(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/len.hpp"

void register_ViewsOfMol_class(){

    { //::SireMol::ViewsOfMol
        typedef bp::class_< SireMol::ViewsOfMol, bp::bases< SireMol::MoleculeView, SireBase::Property > > ViewsOfMol_exposer_t;
        ViewsOfMol_exposer_t ViewsOfMol_exposer = ViewsOfMol_exposer_t( "ViewsOfMol", bp::init< >() );
        bp::scope ViewsOfMol_scope( ViewsOfMol_exposer );
        ViewsOfMol_exposer.def( bp::init< SireMol::MoleculeData const & >(( bp::arg("moldata") )) );
        ViewsOfMol_exposer.def( bp::init< SireMol::MoleculeData const &, SireMol::AtomSelection const & >(( bp::arg("moldata"), bp::arg("selected_atoms") )) );
        ViewsOfMol_exposer.def( bp::init< SireMol::MoleculeData const &, QList< SireMol::AtomSelection > const & >(( bp::arg("moldata"), bp::arg("views") )) );
        ViewsOfMol_exposer.def( bp::init< SireMol::Selector< SireMol::Segment > const & >(( bp::arg("segments") )) );
        ViewsOfMol_exposer.def( bp::init< SireMol::Selector< SireMol::Chain > const & >(( bp::arg("chains") )) );
        ViewsOfMol_exposer.def( bp::init< SireMol::Selector< SireMol::CutGroup > const & >(( bp::arg("cgroups") )) );
        ViewsOfMol_exposer.def( bp::init< SireMol::Selector< SireMol::Residue > const & >(( bp::arg("residue") )) );
        ViewsOfMol_exposer.def( bp::init< SireMol::Selector< SireMol::Atom > const & >(( bp::arg("atoms") )) );
        ViewsOfMol_exposer.def( bp::init< SireMol::MoleculeView const & >(( bp::arg("view") )) );
        ViewsOfMol_exposer.def( bp::init< SireMol::ViewsOfMol const & >(( bp::arg("other") )) );
        { //::SireMol::ViewsOfMol::add
        
            typedef void ( ::SireMol::ViewsOfMol::*add_function_type)( ::SireMol::AtomSelection const & ) ;
            add_function_type add_function_value( &::SireMol::ViewsOfMol::add );
            
            ViewsOfMol_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("view") ) );
        
        }
        { //::SireMol::ViewsOfMol::add
        
            typedef void ( ::SireMol::ViewsOfMol::*add_function_type)( ::QList< SireMol::AtomSelection > const & ) ;
            add_function_type add_function_value( &::SireMol::ViewsOfMol::add );
            
            ViewsOfMol_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("views") ) );
        
        }
        { //::SireMol::ViewsOfMol::addIfUnique
        
            typedef bool ( ::SireMol::ViewsOfMol::*addIfUnique_function_type)( ::SireMol::AtomSelection const & ) ;
            addIfUnique_function_type addIfUnique_function_value( &::SireMol::ViewsOfMol::addIfUnique );
            
            ViewsOfMol_exposer.def( 
                "addIfUnique"
                , addIfUnique_function_value
                , ( bp::arg("view") ) );
        
        }
        { //::SireMol::ViewsOfMol::addIfUnique
        
            typedef ::QList< SireMol::AtomSelection > ( ::SireMol::ViewsOfMol::*addIfUnique_function_type)( ::QList< SireMol::AtomSelection > const & ) ;
            addIfUnique_function_type addIfUnique_function_value( &::SireMol::ViewsOfMol::addIfUnique );
            
            ViewsOfMol_exposer.def( 
                "addIfUnique"
                , addIfUnique_function_value
                , ( bp::arg("views") ) );
        
        }
        { //::SireMol::ViewsOfMol::all
        
            typedef ::SireMol::PartialMolecule ( ::SireMol::ViewsOfMol::*all_function_type)(  ) const;
            all_function_type all_function_value( &::SireMol::ViewsOfMol::all );
            
            ViewsOfMol_exposer.def( 
                "all"
                , all_function_value );
        
        }
        { //::SireMol::ViewsOfMol::assertNoOverlap
        
            typedef void ( ::SireMol::ViewsOfMol::*assertNoOverlap_function_type)(  ) const;
            assertNoOverlap_function_type assertNoOverlap_function_value( &::SireMol::ViewsOfMol::assertNoOverlap );
            
            ViewsOfMol_exposer.def( 
                "assertNoOverlap"
                , assertNoOverlap_function_value );
        
        }
        { //::SireMol::ViewsOfMol::at
        
            typedef ::SireMol::PartialMolecule ( ::SireMol::ViewsOfMol::*at_function_type)( int ) const;
            at_function_type at_function_value( &::SireMol::ViewsOfMol::at );
            
            ViewsOfMol_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("i") ) );
        
        }
        { //::SireMol::ViewsOfMol::contains
        
            typedef bool ( ::SireMol::ViewsOfMol::*contains_function_type)( ::SireMol::AtomIdx ) const;
            contains_function_type contains_function_value( &::SireMol::ViewsOfMol::contains );
            
            ViewsOfMol_exposer.def( 
                "contains"
                , contains_function_value
                , ( bp::arg("atomidx") ) );
        
        }
        { //::SireMol::ViewsOfMol::contains
        
            typedef bool ( ::SireMol::ViewsOfMol::*contains_function_type)( ::SireMol::AtomID const & ) const;
            contains_function_type contains_function_value( &::SireMol::ViewsOfMol::contains );
            
            ViewsOfMol_exposer.def( 
                "contains"
                , contains_function_value
                , ( bp::arg("atomid") ) );
        
        }
        { //::SireMol::ViewsOfMol::contains
        
            typedef bool ( ::SireMol::ViewsOfMol::*contains_function_type)( ::SireMol::AtomSelection const & ) const;
            contains_function_type contains_function_value( &::SireMol::ViewsOfMol::contains );
            
            ViewsOfMol_exposer.def( 
                "contains"
                , contains_function_value
                , ( bp::arg("selection") ) );
        
        }
        { //::SireMol::ViewsOfMol::contains
        
            typedef bool ( ::SireMol::ViewsOfMol::*contains_function_type)( ::QList< SireMol::AtomSelection > const & ) const;
            contains_function_type contains_function_value( &::SireMol::ViewsOfMol::contains );
            
            ViewsOfMol_exposer.def( 
                "contains"
                , contains_function_value
                , ( bp::arg("selections") ) );
        
        }
        { //::SireMol::ViewsOfMol::count
        
            typedef int ( ::SireMol::ViewsOfMol::*count_function_type)(  ) const;
            count_function_type count_function_value( &::SireMol::ViewsOfMol::count );
            
            ViewsOfMol_exposer.def( 
                "count"
                , count_function_value );
        
        }
        { //::SireMol::ViewsOfMol::evaluate
        
            typedef ::SireMol::Evaluator ( ::SireMol::ViewsOfMol::*evaluate_function_type)(  ) const;
            evaluate_function_type evaluate_function_value( &::SireMol::ViewsOfMol::evaluate );
            
            ViewsOfMol_exposer.def( 
                "evaluate"
                , evaluate_function_value );
        
        }
        { //::SireMol::ViewsOfMol::evaluate
        
            typedef ::SireMol::Evaluator ( ::SireMol::ViewsOfMol::*evaluate_function_type)( int ) const;
            evaluate_function_type evaluate_function_value( &::SireMol::ViewsOfMol::evaluate );
            
            ViewsOfMol_exposer.def( 
                "evaluate"
                , evaluate_function_value
                , ( bp::arg("i") ) );
        
        }
        { //::SireMol::ViewsOfMol::hasMetadata
        
            typedef bool ( ::SireMol::ViewsOfMol::*hasMetadata_function_type)( ::SireBase::PropertyName const & ) const;
            hasMetadata_function_type hasMetadata_function_value( &::SireMol::ViewsOfMol::hasMetadata );
            
            ViewsOfMol_exposer.def( 
                "hasMetadata"
                , hasMetadata_function_value
                , ( bp::arg("arg0") ) );
        
        }
        { //::SireMol::ViewsOfMol::hasMetadata
        
            typedef bool ( ::SireMol::ViewsOfMol::*hasMetadata_function_type)( ::SireBase::PropertyName const &,::SireBase::PropertyName const & ) const;
            hasMetadata_function_type hasMetadata_function_value( &::SireMol::ViewsOfMol::hasMetadata );
            
            ViewsOfMol_exposer.def( 
                "hasMetadata"
                , hasMetadata_function_value
                , ( bp::arg("arg0"), bp::arg("arg1") ) );
        
        }
        { //::SireMol::ViewsOfMol::hasProperty
        
            typedef bool ( ::SireMol::ViewsOfMol::*hasProperty_function_type)( ::SireBase::PropertyName const & ) const;
            hasProperty_function_type hasProperty_function_value( &::SireMol::ViewsOfMol::hasProperty );
            
            ViewsOfMol_exposer.def( 
                "hasProperty"
                , hasProperty_function_value
                , ( bp::arg("arg0") ) );
        
        }
        { //::SireMol::ViewsOfMol::indexOf
        
            typedef int ( ::SireMol::ViewsOfMol::*indexOf_function_type)( ::SireMol::AtomSelection const &,int ) const;
            indexOf_function_type indexOf_function_value( &::SireMol::ViewsOfMol::indexOf );
            
            ViewsOfMol_exposer.def( 
                "indexOf"
                , indexOf_function_value
                , ( bp::arg("selection"), bp::arg("from")=(int)(0) ) );
        
        }
        { //::SireMol::ViewsOfMol::intersects
        
            typedef bool ( ::SireMol::ViewsOfMol::*intersects_function_type)( ::SireMol::AtomID const & ) const;
            intersects_function_type intersects_function_value( &::SireMol::ViewsOfMol::intersects );
            
            ViewsOfMol_exposer.def( 
                "intersects"
                , intersects_function_value
                , ( bp::arg("atomid") ) );
        
        }
        { //::SireMol::ViewsOfMol::intersects
        
            typedef bool ( ::SireMol::ViewsOfMol::*intersects_function_type)( ::SireMol::AtomSelection const & ) const;
            intersects_function_type intersects_function_value( &::SireMol::ViewsOfMol::intersects );
            
            ViewsOfMol_exposer.def( 
                "intersects"
                , intersects_function_value
                , ( bp::arg("selection") ) );
        
        }
        { //::SireMol::ViewsOfMol::isEmpty
        
            typedef bool ( ::SireMol::ViewsOfMol::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireMol::ViewsOfMol::isEmpty );
            
            ViewsOfMol_exposer.def( 
                "isEmpty"
                , isEmpty_function_value );
        
        }
        { //::SireMol::ViewsOfMol::join
        
            typedef ::SireMol::PartialMolecule ( ::SireMol::ViewsOfMol::*join_function_type)(  ) const;
            join_function_type join_function_value( &::SireMol::ViewsOfMol::join );
            
            ViewsOfMol_exposer.def( 
                "join"
                , join_function_value );
        
        }
        { //::SireMol::ViewsOfMol::metadataKeys
        
            typedef ::QStringList ( ::SireMol::ViewsOfMol::*metadataKeys_function_type)(  ) const;
            metadataKeys_function_type metadataKeys_function_value( &::SireMol::ViewsOfMol::metadataKeys );
            
            ViewsOfMol_exposer.def( 
                "metadataKeys"
                , metadataKeys_function_value );
        
        }
        { //::SireMol::ViewsOfMol::metadataKeys
        
            typedef ::QStringList ( ::SireMol::ViewsOfMol::*metadataKeys_function_type)( ::SireBase::PropertyName const & ) const;
            metadataKeys_function_type metadataKeys_function_value( &::SireMol::ViewsOfMol::metadataKeys );
            
            ViewsOfMol_exposer.def( 
                "metadataKeys"
                , metadataKeys_function_value
                , ( bp::arg("arg0") ) );
        
        }
        { //::SireMol::ViewsOfMol::molecule
        
            typedef ::SireMol::Molecule ( ::SireMol::ViewsOfMol::*molecule_function_type)(  ) const;
            molecule_function_type molecule_function_value( &::SireMol::ViewsOfMol::molecule );
            
            ViewsOfMol_exposer.def( 
                "molecule"
                , molecule_function_value );
        
        }
        { //::SireMol::ViewsOfMol::move
        
            typedef ::SireMol::Mover< SireMol::ViewsOfMol > ( ::SireMol::ViewsOfMol::*move_function_type)(  ) const;
            move_function_type move_function_value( &::SireMol::ViewsOfMol::move );
            
            ViewsOfMol_exposer.def( 
                "move"
                , move_function_value );
        
        }
        { //::SireMol::ViewsOfMol::move
        
            typedef ::SireMol::Mover< SireMol::ViewsOfMol > ( ::SireMol::ViewsOfMol::*move_function_type)( int ) const;
            move_function_type move_function_value( &::SireMol::ViewsOfMol::move );
            
            ViewsOfMol_exposer.def( 
                "move"
                , move_function_value
                , ( bp::arg("i") ) );
        
        }
        { //::SireMol::ViewsOfMol::nViews
        
            typedef int ( ::SireMol::ViewsOfMol::*nViews_function_type)(  ) const;
            nViews_function_type nViews_function_value( &::SireMol::ViewsOfMol::nViews );
            
            ViewsOfMol_exposer.def( 
                "nViews"
                , nViews_function_value );
        
        }
        { //::SireMol::ViewsOfMol::name
        
            typedef ::SireMol::MolName const & ( ::SireMol::ViewsOfMol::*name_function_type)(  ) const;
            name_function_type name_function_value( &::SireMol::ViewsOfMol::name );
            
            ViewsOfMol_exposer.def( 
                "name"
                , name_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireMol::ViewsOfMol::number
        
            typedef ::SireMol::MolNum ( ::SireMol::ViewsOfMol::*number_function_type)(  ) const;
            number_function_type number_function_value( &::SireMol::ViewsOfMol::number );
            
            ViewsOfMol_exposer.def( 
                "number"
                , number_function_value );
        
        }
        ViewsOfMol_exposer.def( bp::self != bp::self );
        ViewsOfMol_exposer.def( bp::self + bp::self );
        ViewsOfMol_exposer.def( bp::self - bp::self );
        { //::SireMol::ViewsOfMol::operator=
        
            typedef ::SireMol::ViewsOfMol & ( ::SireMol::ViewsOfMol::*assign_function_type)( ::SireMol::ViewsOfMol const & ) ;
            assign_function_type assign_function_value( &::SireMol::ViewsOfMol::operator= );
            
            ViewsOfMol_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        { //::SireMol::ViewsOfMol::operator=
        
            typedef ::SireMol::ViewsOfMol & ( ::SireMol::ViewsOfMol::*assign_function_type)( ::SireMol::Selector< SireMol::Atom > const & ) ;
            assign_function_type assign_function_value( &::SireMol::ViewsOfMol::operator= );
            
            ViewsOfMol_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("atoms") )
                , bp::return_self< >() );
        
        }
        { //::SireMol::ViewsOfMol::operator=
        
            typedef ::SireMol::ViewsOfMol & ( ::SireMol::ViewsOfMol::*assign_function_type)( ::SireMol::Selector< SireMol::CutGroup > const & ) ;
            assign_function_type assign_function_value( &::SireMol::ViewsOfMol::operator= );
            
            ViewsOfMol_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("cgroups") )
                , bp::return_self< >() );
        
        }
        { //::SireMol::ViewsOfMol::operator=
        
            typedef ::SireMol::ViewsOfMol & ( ::SireMol::ViewsOfMol::*assign_function_type)( ::SireMol::Selector< SireMol::Residue > const & ) ;
            assign_function_type assign_function_value( &::SireMol::ViewsOfMol::operator= );
            
            ViewsOfMol_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("residues") )
                , bp::return_self< >() );
        
        }
        { //::SireMol::ViewsOfMol::operator=
        
            typedef ::SireMol::ViewsOfMol & ( ::SireMol::ViewsOfMol::*assign_function_type)( ::SireMol::Selector< SireMol::Chain > const & ) ;
            assign_function_type assign_function_value( &::SireMol::ViewsOfMol::operator= );
            
            ViewsOfMol_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("chains") )
                , bp::return_self< >() );
        
        }
        { //::SireMol::ViewsOfMol::operator=
        
            typedef ::SireMol::ViewsOfMol & ( ::SireMol::ViewsOfMol::*assign_function_type)( ::SireMol::Selector< SireMol::Segment > const & ) ;
            assign_function_type assign_function_value( &::SireMol::ViewsOfMol::operator= );
            
            ViewsOfMol_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("segments") )
                , bp::return_self< >() );
        
        }
        { //::SireMol::ViewsOfMol::operator=
        
            typedef ::SireMol::ViewsOfMol & ( ::SireMol::ViewsOfMol::*assign_function_type)( ::SireMol::MoleculeView const & ) ;
            assign_function_type assign_function_value( &::SireMol::ViewsOfMol::operator= );
            
            ViewsOfMol_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("view") )
                , bp::return_self< >() );
        
        }
        ViewsOfMol_exposer.def( bp::self == bp::self );
        { //::SireMol::ViewsOfMol::operator[]
        
            typedef ::SireMol::PartialMolecule ( ::SireMol::ViewsOfMol::*__getitem___function_type)( int ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::ViewsOfMol::operator[] );
            
            ViewsOfMol_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") ) );
        
        }
        { //::SireMol::ViewsOfMol::propertyKeys
        
            typedef ::QStringList ( ::SireMol::ViewsOfMol::*propertyKeys_function_type)(  ) const;
            propertyKeys_function_type propertyKeys_function_value( &::SireMol::ViewsOfMol::propertyKeys );
            
            ViewsOfMol_exposer.def( 
                "propertyKeys"
                , propertyKeys_function_value );
        
        }
        { //::SireMol::ViewsOfMol::remove
        
            typedef bool ( ::SireMol::ViewsOfMol::*remove_function_type)( ::SireMol::AtomSelection const & ) ;
            remove_function_type remove_function_value( &::SireMol::ViewsOfMol::remove );
            
            ViewsOfMol_exposer.def( 
                "remove"
                , remove_function_value
                , ( bp::arg("view") ) );
        
        }
        { //::SireMol::ViewsOfMol::remove
        
            typedef ::QList< SireMol::AtomSelection > ( ::SireMol::ViewsOfMol::*remove_function_type)( ::QList< SireMol::AtomSelection > const & ) ;
            remove_function_type remove_function_value( &::SireMol::ViewsOfMol::remove );
            
            ViewsOfMol_exposer.def( 
                "remove"
                , remove_function_value
                , ( bp::arg("views") ) );
        
        }
        { //::SireMol::ViewsOfMol::removeAll
        
            typedef bool ( ::SireMol::ViewsOfMol::*removeAll_function_type)( ::SireMol::AtomSelection const & ) ;
            removeAll_function_type removeAll_function_value( &::SireMol::ViewsOfMol::removeAll );
            
            ViewsOfMol_exposer.def( 
                "removeAll"
                , removeAll_function_value
                , ( bp::arg("view") ) );
        
        }
        { //::SireMol::ViewsOfMol::removeAll
        
            typedef ::QList< SireMol::AtomSelection > ( ::SireMol::ViewsOfMol::*removeAll_function_type)( ::QList< SireMol::AtomSelection > const & ) ;
            removeAll_function_type removeAll_function_value( &::SireMol::ViewsOfMol::removeAll );
            
            ViewsOfMol_exposer.def( 
                "removeAll"
                , removeAll_function_value
                , ( bp::arg("views") ) );
        
        }
        { //::SireMol::ViewsOfMol::removeAll
        
            typedef void ( ::SireMol::ViewsOfMol::*removeAll_function_type)(  ) ;
            removeAll_function_type removeAll_function_value( &::SireMol::ViewsOfMol::removeAll );
            
            ViewsOfMol_exposer.def( 
                "removeAll"
                , removeAll_function_value );
        
        }
        { //::SireMol::ViewsOfMol::removeAt
        
            typedef ::SireMol::AtomSelection ( ::SireMol::ViewsOfMol::*removeAt_function_type)( int ) ;
            removeAt_function_type removeAt_function_value( &::SireMol::ViewsOfMol::removeAt );
            
            ViewsOfMol_exposer.def( 
                "removeAt"
                , removeAt_function_value
                , ( bp::arg("i") ) );
        
        }
        { //::SireMol::ViewsOfMol::removeDuplicates
        
            typedef ::QList< SireMol::AtomSelection > ( ::SireMol::ViewsOfMol::*removeDuplicates_function_type)(  ) ;
            removeDuplicates_function_type removeDuplicates_function_value( &::SireMol::ViewsOfMol::removeDuplicates );
            
            ViewsOfMol_exposer.def( 
                "removeDuplicates"
                , removeDuplicates_function_value );
        
        }
        { //::SireMol::ViewsOfMol::selectedAll
        
            typedef bool ( ::SireMol::ViewsOfMol::*selectedAll_function_type)(  ) const;
            selectedAll_function_type selectedAll_function_value( &::SireMol::ViewsOfMol::selectedAll );
            
            ViewsOfMol_exposer.def( 
                "selectedAll"
                , selectedAll_function_value );
        
        }
        { //::SireMol::ViewsOfMol::selection
        
            typedef ::SireMol::AtomSelection ( ::SireMol::ViewsOfMol::*selection_function_type)(  ) const;
            selection_function_type selection_function_value( &::SireMol::ViewsOfMol::selection );
            
            ViewsOfMol_exposer.def( 
                "selection"
                , selection_function_value );
        
        }
        { //::SireMol::ViewsOfMol::selection
        
            typedef ::SireMol::AtomSelection const & ( ::SireMol::ViewsOfMol::*selection_function_type)( int ) const;
            selection_function_type selection_function_value( &::SireMol::ViewsOfMol::selection );
            
            ViewsOfMol_exposer.def( 
                "selection"
                , selection_function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireMol::ViewsOfMol::selections
        
            typedef ::QList< SireMol::AtomSelection > ( ::SireMol::ViewsOfMol::*selections_function_type)(  ) const;
            selections_function_type selections_function_value( &::SireMol::ViewsOfMol::selections );
            
            ViewsOfMol_exposer.def( 
                "selections"
                , selections_function_value );
        
        }
        { //::SireMol::ViewsOfMol::toString
        
            typedef ::QString ( ::SireMol::ViewsOfMol::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::ViewsOfMol::toString );
            
            ViewsOfMol_exposer.def( 
                "toString"
                , toString_function_value );
        
        }
        { //::SireMol::ViewsOfMol::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::ViewsOfMol::typeName );
            
            ViewsOfMol_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        { //::SireMol::ViewsOfMol::unite
        
            typedef bool ( ::SireMol::ViewsOfMol::*unite_function_type)( ::SireMol::AtomSelection const & ) ;
            unite_function_type unite_function_value( &::SireMol::ViewsOfMol::unite );
            
            ViewsOfMol_exposer.def( 
                "unite"
                , unite_function_value
                , ( bp::arg("view") ) );
        
        }
        { //::SireMol::ViewsOfMol::unite
        
            typedef ::QList< SireMol::AtomSelection > ( ::SireMol::ViewsOfMol::*unite_function_type)( ::QList< SireMol::AtomSelection > const & ) ;
            unite_function_type unite_function_value( &::SireMol::ViewsOfMol::unite );
            
            ViewsOfMol_exposer.def( 
                "unite"
                , unite_function_value
                , ( bp::arg("views") ) );
        
        }
        { //::SireMol::ViewsOfMol::version
        
            typedef ::quint64 ( ::SireMol::ViewsOfMol::*version_function_type)(  ) const;
            version_function_type version_function_value( &::SireMol::ViewsOfMol::version );
            
            ViewsOfMol_exposer.def( 
                "version"
                , version_function_value );
        
        }
        { //::SireMol::ViewsOfMol::version
        
            typedef ::quint64 ( ::SireMol::ViewsOfMol::*version_function_type)( ::SireBase::PropertyName const & ) const;
            version_function_type version_function_value( &::SireMol::ViewsOfMol::version );
            
            ViewsOfMol_exposer.def( 
                "version"
                , version_function_value
                , ( bp::arg("key") ) );
        
        }
        { //::SireMol::ViewsOfMol::viewAt
        
            typedef ::SireMol::AtomSelection const & ( ::SireMol::ViewsOfMol::*viewAt_function_type)( int ) const;
            viewAt_function_type viewAt_function_value( &::SireMol::ViewsOfMol::viewAt );
            
            ViewsOfMol_exposer.def( 
                "viewAt"
                , viewAt_function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        ViewsOfMol_exposer.staticmethod( "typeName" );
        ViewsOfMol_exposer.def( "__copy__", &__copy__);
        ViewsOfMol_exposer.def( "__deepcopy__", &__copy__);
        ViewsOfMol_exposer.def( "clone", &__copy__);
        ViewsOfMol_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::ViewsOfMol >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ViewsOfMol_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::ViewsOfMol >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ViewsOfMol_exposer.def( "__str__", &__str__< ::SireMol::ViewsOfMol > );
        ViewsOfMol_exposer.def( "__repr__", &__str__< ::SireMol::ViewsOfMol > );
        ViewsOfMol_exposer.def( "__len__", &__len_count< ::SireMol::ViewsOfMol > );
    }

}
