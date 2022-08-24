// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "MolEditor.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "atom.h"

#include "atomeditor.h"

#include "cgeditor.h"

#include "chain.h"

#include "chaineditor.h"

#include "cutgroup.h"

#include "moleditor.h"

#include "mover.hpp"

#include "reseditor.h"

#include "residue.h"

#include "segeditor.h"

#include "segment.h"

#include "selector.hpp"

#include "moleditor.h"

SireMol::MolEditor __copy__(const SireMol::MolEditor &other){ return SireMol::MolEditor(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

#include "Helpers/len.hpp"

void register_MolEditor_class(){

    { //::SireMol::MolEditor
        typedef bp::class_< SireMol::MolEditor, bp::bases< SireMol::Editor<SireMol::MolEditor, SireMol::Molecule>, SireMol::Molecule, SireMol::MoleculeView, SireBase::Property > > MolEditor_exposer_t;
        MolEditor_exposer_t MolEditor_exposer = MolEditor_exposer_t( "MolEditor", "This class is used to edit non-structural parts of a molecule\n(e.g. its name, number, properties etc.). To add, move or remove\natoms, residues, CutGroups, chains or segments, you need to\nuse a MolStructureEditor (which is created for you automatically\nby member functions that perform such editing)\n\nAuthor: Christopher Woods\n", bp::init< >("Null constructor") );
        bp::scope MolEditor_scope( MolEditor_exposer );
        MolEditor_exposer.def( bp::init< SireMol::Molecule const & >(( bp::arg("molecule") ), "Construct an editor to edit a copy of molecule") );
        MolEditor_exposer.def( bp::init< SireMol::MolEditor const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMol::MolEditor::add
        
            typedef ::SireMol::AtomStructureEditor ( ::SireMol::MolEditor::*add_function_type)( ::SireMol::AtomName const & ) const;
            add_function_type add_function_value( &::SireMol::MolEditor::add );
            
            MolEditor_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("atom") )
                , bp::release_gil_policy()
                , "Add an atom called name and return an editor that can\nbe used to edit it" );
        
        }
        { //::SireMol::MolEditor::add
        
            typedef ::SireMol::AtomStructureEditor ( ::SireMol::MolEditor::*add_function_type)( ::SireMol::AtomNum const & ) const;
            add_function_type add_function_value( &::SireMol::MolEditor::add );
            
            MolEditor_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("atom") )
                , bp::release_gil_policy()
                , "Add an atom called name and return an editor that can\nbe used to edit it" );
        
        }
        { //::SireMol::MolEditor::add
        
            typedef ::SireMol::ResStructureEditor ( ::SireMol::MolEditor::*add_function_type)( ::SireMol::ResName const & ) const;
            add_function_type add_function_value( &::SireMol::MolEditor::add );
            
            MolEditor_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("residue") )
                , bp::release_gil_policy()
                , "Add a residue called name and return an editor that can\nbe used to edit it" );
        
        }
        { //::SireMol::MolEditor::add
        
            typedef ::SireMol::ResStructureEditor ( ::SireMol::MolEditor::*add_function_type)( ::SireMol::ResNum const & ) const;
            add_function_type add_function_value( &::SireMol::MolEditor::add );
            
            MolEditor_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("residue") )
                , bp::release_gil_policy()
                , "Add a residue with number number and return an editor that\ncan be used to edit it" );
        
        }
        { //::SireMol::MolEditor::add
        
            typedef ::SireMol::CGStructureEditor ( ::SireMol::MolEditor::*add_function_type)( ::SireMol::CGName const & ) const;
            add_function_type add_function_value( &::SireMol::MolEditor::add );
            
            MolEditor_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("cutgroup") )
                , bp::release_gil_policy()
                , "Add a CutGroup called name and return an editor that can\nbe used to edit it" );
        
        }
        { //::SireMol::MolEditor::add
        
            typedef ::SireMol::ChainStructureEditor ( ::SireMol::MolEditor::*add_function_type)( ::SireMol::ChainName const & ) const;
            add_function_type add_function_value( &::SireMol::MolEditor::add );
            
            MolEditor_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("chain") )
                , bp::release_gil_policy()
                , "Add a chain called name and return an editor that can\nbe used to edit it" );
        
        }
        { //::SireMol::MolEditor::add
        
            typedef ::SireMol::SegStructureEditor ( ::SireMol::MolEditor::*add_function_type)( ::SireMol::SegName const & ) const;
            add_function_type add_function_value( &::SireMol::MolEditor::add );
            
            MolEditor_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("segment") )
                , bp::release_gil_policy()
                , "Add a segment called name and return an editor that can\nbe used to edit it" );
        
        }
        { //::SireMol::MolEditor::commit
        
            typedef ::SireMol::Molecule ( ::SireMol::MolEditor::*commit_function_type)(  ) const;
            commit_function_type commit_function_value( &::SireMol::MolEditor::commit );
            
            MolEditor_exposer.def( 
                "commit"
                , commit_function_value
                , bp::release_gil_policy()
                , "Commit these changes and return a copy of the\nedited molecule" );
        
        }
        { //::SireMol::MolEditor::operator=
        
            typedef ::SireMol::MolEditor & ( ::SireMol::MolEditor::*assign_function_type)( ::SireMol::Molecule const & ) ;
            assign_function_type assign_function_value( &::SireMol::MolEditor::operator= );
            
            MolEditor_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("molecule") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::MolEditor::operator=
        
            typedef ::SireMol::MolEditor & ( ::SireMol::MolEditor::*assign_function_type)( ::SireMol::MolEditor const & ) ;
            assign_function_type assign_function_value( &::SireMol::MolEditor::operator= );
            
            MolEditor_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::MolEditor::remove
        
            typedef ::SireMol::MolStructureEditor ( ::SireMol::MolEditor::*remove_function_type)( ::SireMol::AtomID const & ) const;
            remove_function_type remove_function_value( &::SireMol::MolEditor::remove );
            
            MolEditor_exposer.def( 
                "remove"
                , remove_function_value
                , ( bp::arg("atomid") )
                , bp::release_gil_policy()
                , "Remove all atoms from this molecule that have the ID atomid.\nThis does nothing if there are no atoms with this ID.\nThis returns an editor that can be used to further edit\nthe molecule" );
        
        }
        { //::SireMol::MolEditor::remove
        
            typedef ::SireMol::MolStructureEditor ( ::SireMol::MolEditor::*remove_function_type)( ::SireMol::CGID const & ) const;
            remove_function_type remove_function_value( &::SireMol::MolEditor::remove );
            
            MolEditor_exposer.def( 
                "remove"
                , remove_function_value
                , ( bp::arg("cgid") )
                , bp::release_gil_policy()
                , "Remove all CutGroups from this molecule that have the ID atomid.\nThis does nothing if there are no CutGroups with this ID.\nThis returns an editor that can be used to further edit\nthe molecule" );
        
        }
        { //::SireMol::MolEditor::remove
        
            typedef ::SireMol::MolStructureEditor ( ::SireMol::MolEditor::*remove_function_type)( ::SireMol::ResID const & ) const;
            remove_function_type remove_function_value( &::SireMol::MolEditor::remove );
            
            MolEditor_exposer.def( 
                "remove"
                , remove_function_value
                , ( bp::arg("resid") )
                , bp::release_gil_policy()
                , "Remove all residues from this molecule that have the ID atomid.\nThis does nothing if there are no residues with this ID.\nThis returns an editor that can be used to further edit\nthe molecule" );
        
        }
        { //::SireMol::MolEditor::remove
        
            typedef ::SireMol::MolStructureEditor ( ::SireMol::MolEditor::*remove_function_type)( ::SireMol::ChainID const & ) const;
            remove_function_type remove_function_value( &::SireMol::MolEditor::remove );
            
            MolEditor_exposer.def( 
                "remove"
                , remove_function_value
                , ( bp::arg("chainid") )
                , bp::release_gil_policy()
                , "Remove all chains from this molecule that have the ID atomid.\nThis does nothing if there are no chains with this ID.\nThis returns an editor that can be used to further edit\nthe molecule" );
        
        }
        { //::SireMol::MolEditor::remove
        
            typedef ::SireMol::MolStructureEditor ( ::SireMol::MolEditor::*remove_function_type)( ::SireMol::SegID const & ) const;
            remove_function_type remove_function_value( &::SireMol::MolEditor::remove );
            
            MolEditor_exposer.def( 
                "remove"
                , remove_function_value
                , ( bp::arg("segid") )
                , bp::release_gil_policy()
                , "Remove all segments from this molecule that have the ID atomid.\nThis does nothing if there are no segments with this ID.\nThis returns an editor that can be used to further edit\nthe molecule" );
        
        }
        { //::SireMol::MolEditor::removeAllAtoms
        
            typedef ::SireMol::MolStructureEditor ( ::SireMol::MolEditor::*removeAllAtoms_function_type)(  ) const;
            removeAllAtoms_function_type removeAllAtoms_function_value( &::SireMol::MolEditor::removeAllAtoms );
            
            MolEditor_exposer.def( 
                "removeAllAtoms"
                , removeAllAtoms_function_value
                , bp::release_gil_policy()
                , "Remove all atoms from this molecule. This returns an editor that\ncan be used to further edit the structure of this molecule" );
        
        }
        { //::SireMol::MolEditor::removeAllChains
        
            typedef ::SireMol::MolStructureEditor ( ::SireMol::MolEditor::*removeAllChains_function_type)(  ) const;
            removeAllChains_function_type removeAllChains_function_value( &::SireMol::MolEditor::removeAllChains );
            
            MolEditor_exposer.def( 
                "removeAllChains"
                , removeAllChains_function_value
                , bp::release_gil_policy()
                , "Remove all chains from this molecule. This returns an editor that\ncan be used to further edit the structure of this molecule" );
        
        }
        { //::SireMol::MolEditor::removeAllCutGroups
        
            typedef ::SireMol::MolStructureEditor ( ::SireMol::MolEditor::*removeAllCutGroups_function_type)(  ) const;
            removeAllCutGroups_function_type removeAllCutGroups_function_value( &::SireMol::MolEditor::removeAllCutGroups );
            
            MolEditor_exposer.def( 
                "removeAllCutGroups"
                , removeAllCutGroups_function_value
                , bp::release_gil_policy()
                , "Remove all CutGroups from this molecule. This returns an editor that\ncan be used to further edit the structure of this molecule" );
        
        }
        { //::SireMol::MolEditor::removeAllResidues
        
            typedef ::SireMol::MolStructureEditor ( ::SireMol::MolEditor::*removeAllResidues_function_type)(  ) const;
            removeAllResidues_function_type removeAllResidues_function_value( &::SireMol::MolEditor::removeAllResidues );
            
            MolEditor_exposer.def( 
                "removeAllResidues"
                , removeAllResidues_function_value
                , bp::release_gil_policy()
                , "Remove all residues from this molecule. This returns an editor that\ncan be used to further edit the structure of this molecule" );
        
        }
        { //::SireMol::MolEditor::removeAllSegments
        
            typedef ::SireMol::MolStructureEditor ( ::SireMol::MolEditor::*removeAllSegments_function_type)(  ) const;
            removeAllSegments_function_type removeAllSegments_function_value( &::SireMol::MolEditor::removeAllSegments );
            
            MolEditor_exposer.def( 
                "removeAllSegments"
                , removeAllSegments_function_value
                , bp::release_gil_policy()
                , "Remove all segments from this molecule. This returns an editor that\ncan be used to further edit the structure of this molecule" );
        
        }
        { //::SireMol::MolEditor::rename
        
            typedef ::SireMol::MolEditor & ( ::SireMol::MolEditor::*rename_function_type)( ::QString const & ) ;
            rename_function_type rename_function_value( &::SireMol::MolEditor::rename );
            
            MolEditor_exposer.def( 
                "rename"
                , rename_function_value
                , ( bp::arg("name") )
                , bp::return_self< >()
                , "Rename this molecule to newname" );
        
        }
        { //::SireMol::MolEditor::renumber
        
            typedef ::SireMol::MolEditor & ( ::SireMol::MolEditor::*renumber_function_type)(  ) ;
            renumber_function_type renumber_function_value( &::SireMol::MolEditor::renumber );
            
            MolEditor_exposer.def( 
                "renumber"
                , renumber_function_value
                , bp::return_self< >()
                , "Give this molecule a new, unique ID number" );
        
        }
        { //::SireMol::MolEditor::renumber
        
            typedef ::SireMol::MolEditor & ( ::SireMol::MolEditor::*renumber_function_type)( ::SireMol::MolNum ) ;
            renumber_function_type renumber_function_value( &::SireMol::MolEditor::renumber );
            
            MolEditor_exposer.def( 
                "renumber"
                , renumber_function_value
                , ( bp::arg("newnum") )
                , bp::return_self< >()
                , "Give this molecule the ID number newnum" );
        
        }
        { //::SireMol::MolEditor::renumber
        
            typedef ::SireMol::MolEditor & ( ::SireMol::MolEditor::*renumber_function_type)( ::QHash< SireMol::AtomNum, SireMol::AtomNum > const & ) ;
            renumber_function_type renumber_function_value( &::SireMol::MolEditor::renumber );
            
            MolEditor_exposer.def( 
                "renumber"
                , renumber_function_value
                , ( bp::arg("atomnums") )
                , bp::return_self< >()
                , "Renumber the atoms in the molecule according to the passed map" );
        
        }
        { //::SireMol::MolEditor::renumber
        
            typedef ::SireMol::MolEditor & ( ::SireMol::MolEditor::*renumber_function_type)( ::QHash< SireMol::ResNum, SireMol::ResNum > const & ) ;
            renumber_function_type renumber_function_value( &::SireMol::MolEditor::renumber );
            
            MolEditor_exposer.def( 
                "renumber"
                , renumber_function_value
                , ( bp::arg("resnums") )
                , bp::return_self< >()
                , "Renumber the residues in the molecule according to the passed map" );
        
        }
        { //::SireMol::MolEditor::renumber
        
            typedef ::SireMol::MolEditor & ( ::SireMol::MolEditor::*renumber_function_type)( ::QHash< SireMol::AtomNum, SireMol::AtomNum > const &,::QHash< SireMol::ResNum, SireMol::ResNum > const & ) ;
            renumber_function_type renumber_function_value( &::SireMol::MolEditor::renumber );
            
            MolEditor_exposer.def( 
                "renumber"
                , renumber_function_value
                , ( bp::arg("atomnums"), bp::arg("resnums") )
                , bp::return_self< >()
                , "Renumber the atoms and residues in the molecule according to the passed maps" );
        
        }
        { //::SireMol::MolEditor::toString
        
            typedef ::QString ( ::SireMol::MolEditor::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::MolEditor::toString );
            
            MolEditor_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "Return a string representation of this editor" );
        
        }
        { //::SireMol::MolEditor::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::MolEditor::typeName );
            
            MolEditor_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        MolEditor_exposer.staticmethod( "typeName" );
        MolEditor_exposer.def( "__copy__", &__copy__);
        MolEditor_exposer.def( "__deepcopy__", &__copy__);
        MolEditor_exposer.def( "clone", &__copy__);
        MolEditor_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::MolEditor >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        MolEditor_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::MolEditor >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        MolEditor_exposer.def_pickle(sire_pickle_suite< ::SireMol::MolEditor >());
        MolEditor_exposer.def( "__str__", &__str__< ::SireMol::MolEditor > );
        MolEditor_exposer.def( "__repr__", &__str__< ::SireMol::MolEditor > );
        MolEditor_exposer.def( "__len__", &__len_size< ::SireMol::MolEditor > );
    }

}
