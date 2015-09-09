// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "AtomStructureEditor.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "atom.h"

#include "atomeditor.h"

#include "cgeditor.h"

#include "cgidx.h"

#include "chain.h"

#include "chaineditor.h"

#include "cutgroup.h"

#include "molecule.h"

#include "moleditor.h"

#include "mover.hpp"

#include "reseditor.h"

#include "residue.h"

#include "residx.h"

#include "segeditor.h"

#include "segidx.h"

#include "segment.h"

#include "selector.hpp"

#include "atomeditor.h"

SireMol::AtomStructureEditor __copy__(const SireMol::AtomStructureEditor &other){ return SireMol::AtomStructureEditor(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_AtomStructureEditor_class(){

    { //::SireMol::AtomStructureEditor
        typedef bp::class_< SireMol::AtomStructureEditor > AtomStructureEditor_exposer_t;
        AtomStructureEditor_exposer_t AtomStructureEditor_exposer = AtomStructureEditor_exposer_t( "AtomStructureEditor", bp::init< >() );
        bp::scope AtomStructureEditor_scope( AtomStructureEditor_exposer );
        AtomStructureEditor_exposer.def( bp::init< SireMol::Atom const & >(( bp::arg("atom") )) );
        AtomStructureEditor_exposer.def( bp::init< SireMol::StructureEditor const &, SireMol::AtomIdx >(( bp::arg("data"), bp::arg("atomidx") )) );
        AtomStructureEditor_exposer.def( bp::init< SireMol::AtomStructureEditor const & >(( bp::arg("other") )) );
        { //::SireMol::AtomStructureEditor::chain
        
            typedef ::SireMol::ChainStructureEditor ( ::SireMol::AtomStructureEditor::*chain_function_type)(  ) ;
            chain_function_type chain_function_value( &::SireMol::AtomStructureEditor::chain );
            
            AtomStructureEditor_exposer.def( 
                "chain"
                , chain_function_value );
        
        }
        { //::SireMol::AtomStructureEditor::commit
        
            typedef ::SireMol::Atom ( ::SireMol::AtomStructureEditor::*commit_function_type)(  ) const;
            commit_function_type commit_function_value( &::SireMol::AtomStructureEditor::commit );
            
            AtomStructureEditor_exposer.def( 
                "commit"
                , commit_function_value );
        
        }
        { //::SireMol::AtomStructureEditor::cutGroup
        
            typedef ::SireMol::CGStructureEditor ( ::SireMol::AtomStructureEditor::*cutGroup_function_type)(  ) ;
            cutGroup_function_type cutGroup_function_value( &::SireMol::AtomStructureEditor::cutGroup );
            
            AtomStructureEditor_exposer.def( 
                "cutGroup"
                , cutGroup_function_value );
        
        }
        { //::SireMol::AtomStructureEditor::index
        
            typedef ::SireMol::AtomIdx ( ::SireMol::AtomStructureEditor::*index_function_type)(  ) const;
            index_function_type index_function_value( &::SireMol::AtomStructureEditor::index );
            
            AtomStructureEditor_exposer.def( 
                "index"
                , index_function_value );
        
        }
        { //::SireMol::AtomStructureEditor::molecule
        
            typedef ::SireMol::MolStructureEditor ( ::SireMol::AtomStructureEditor::*molecule_function_type)(  ) ;
            molecule_function_type molecule_function_value( &::SireMol::AtomStructureEditor::molecule );
            
            AtomStructureEditor_exposer.def( 
                "molecule"
                , molecule_function_value );
        
        }
        { //::SireMol::AtomStructureEditor::name
        
            typedef ::SireMol::AtomName const & ( ::SireMol::AtomStructureEditor::*name_function_type)(  ) const;
            name_function_type name_function_value( &::SireMol::AtomStructureEditor::name );
            
            AtomStructureEditor_exposer.def( 
                "name"
                , name_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireMol::AtomStructureEditor::number
        
            typedef ::SireMol::AtomNum ( ::SireMol::AtomStructureEditor::*number_function_type)(  ) const;
            number_function_type number_function_value( &::SireMol::AtomStructureEditor::number );
            
            AtomStructureEditor_exposer.def( 
                "number"
                , number_function_value );
        
        }
        { //::SireMol::AtomStructureEditor::operator=
        
            typedef ::SireMol::AtomStructureEditor & ( ::SireMol::AtomStructureEditor::*assign_function_type)( ::SireMol::Atom const & ) ;
            assign_function_type assign_function_value( &::SireMol::AtomStructureEditor::operator= );
            
            AtomStructureEditor_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("atom") )
                , bp::return_self< >() );
        
        }
        { //::SireMol::AtomStructureEditor::operator=
        
            typedef ::SireMol::AtomStructureEditor & ( ::SireMol::AtomStructureEditor::*assign_function_type)( ::SireMol::AtomStructureEditor const & ) ;
            assign_function_type assign_function_value( &::SireMol::AtomStructureEditor::operator= );
            
            AtomStructureEditor_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        { //::SireMol::AtomStructureEditor::reindex
        
            typedef ::SireMol::AtomStructureEditor & ( ::SireMol::AtomStructureEditor::*reindex_function_type)( ::SireMol::AtomIdx ) ;
            reindex_function_type reindex_function_value( &::SireMol::AtomStructureEditor::reindex );
            
            AtomStructureEditor_exposer.def( 
                "reindex"
                , reindex_function_value
                , ( bp::arg("idx") )
                , bp::return_self< >() );
        
        }
        { //::SireMol::AtomStructureEditor::remove
        
            typedef ::SireMol::MolStructureEditor ( ::SireMol::AtomStructureEditor::*remove_function_type)(  ) ;
            remove_function_type remove_function_value( &::SireMol::AtomStructureEditor::remove );
            
            AtomStructureEditor_exposer.def( 
                "remove"
                , remove_function_value );
        
        }
        { //::SireMol::AtomStructureEditor::rename
        
            typedef ::SireMol::AtomStructureEditor & ( ::SireMol::AtomStructureEditor::*rename_function_type)( ::SireMol::AtomName const & ) ;
            rename_function_type rename_function_value( &::SireMol::AtomStructureEditor::rename );
            
            AtomStructureEditor_exposer.def( 
                "rename"
                , rename_function_value
                , ( bp::arg("name") )
                , bp::return_self< >() );
        
        }
        { //::SireMol::AtomStructureEditor::renumber
        
            typedef ::SireMol::AtomStructureEditor & ( ::SireMol::AtomStructureEditor::*renumber_function_type)( ::SireMol::AtomNum ) ;
            renumber_function_type renumber_function_value( &::SireMol::AtomStructureEditor::renumber );
            
            AtomStructureEditor_exposer.def( 
                "renumber"
                , renumber_function_value
                , ( bp::arg("number") )
                , bp::return_self< >() );
        
        }
        { //::SireMol::AtomStructureEditor::reparent
        
            typedef ::SireMol::AtomStructureEditor & ( ::SireMol::AtomStructureEditor::*reparent_function_type)( ::SireMol::CGIdx ) ;
            reparent_function_type reparent_function_value( &::SireMol::AtomStructureEditor::reparent );
            
            AtomStructureEditor_exposer.def( 
                "reparent"
                , reparent_function_value
                , ( bp::arg("cgidx") )
                , bp::return_self< >() );
        
        }
        { //::SireMol::AtomStructureEditor::reparent
        
            typedef ::SireMol::AtomStructureEditor & ( ::SireMol::AtomStructureEditor::*reparent_function_type)( ::SireMol::CGID const & ) ;
            reparent_function_type reparent_function_value( &::SireMol::AtomStructureEditor::reparent );
            
            AtomStructureEditor_exposer.def( 
                "reparent"
                , reparent_function_value
                , ( bp::arg("cgid") )
                , bp::return_self< >() );
        
        }
        { //::SireMol::AtomStructureEditor::reparent
        
            typedef ::SireMol::AtomStructureEditor & ( ::SireMol::AtomStructureEditor::*reparent_function_type)( ::SireMol::ResIdx ) ;
            reparent_function_type reparent_function_value( &::SireMol::AtomStructureEditor::reparent );
            
            AtomStructureEditor_exposer.def( 
                "reparent"
                , reparent_function_value
                , ( bp::arg("residx") )
                , bp::return_self< >() );
        
        }
        { //::SireMol::AtomStructureEditor::reparent
        
            typedef ::SireMol::AtomStructureEditor & ( ::SireMol::AtomStructureEditor::*reparent_function_type)( ::SireMol::ResID const & ) ;
            reparent_function_type reparent_function_value( &::SireMol::AtomStructureEditor::reparent );
            
            AtomStructureEditor_exposer.def( 
                "reparent"
                , reparent_function_value
                , ( bp::arg("resid") )
                , bp::return_self< >() );
        
        }
        { //::SireMol::AtomStructureEditor::reparent
        
            typedef ::SireMol::AtomStructureEditor & ( ::SireMol::AtomStructureEditor::*reparent_function_type)( ::SireMol::SegIdx ) ;
            reparent_function_type reparent_function_value( &::SireMol::AtomStructureEditor::reparent );
            
            AtomStructureEditor_exposer.def( 
                "reparent"
                , reparent_function_value
                , ( bp::arg("segidx") )
                , bp::return_self< >() );
        
        }
        { //::SireMol::AtomStructureEditor::reparent
        
            typedef ::SireMol::AtomStructureEditor & ( ::SireMol::AtomStructureEditor::*reparent_function_type)( ::SireMol::SegID const & ) ;
            reparent_function_type reparent_function_value( &::SireMol::AtomStructureEditor::reparent );
            
            AtomStructureEditor_exposer.def( 
                "reparent"
                , reparent_function_value
                , ( bp::arg("segid") )
                , bp::return_self< >() );
        
        }
        { //::SireMol::AtomStructureEditor::residue
        
            typedef ::SireMol::ResStructureEditor ( ::SireMol::AtomStructureEditor::*residue_function_type)(  ) ;
            residue_function_type residue_function_value( &::SireMol::AtomStructureEditor::residue );
            
            AtomStructureEditor_exposer.def( 
                "residue"
                , residue_function_value );
        
        }
        { //::SireMol::AtomStructureEditor::segment
        
            typedef ::SireMol::SegStructureEditor ( ::SireMol::AtomStructureEditor::*segment_function_type)(  ) ;
            segment_function_type segment_function_value( &::SireMol::AtomStructureEditor::segment );
            
            AtomStructureEditor_exposer.def( 
                "segment"
                , segment_function_value );
        
        }
        { //::SireMol::AtomStructureEditor::selectedAll
        
            typedef bool ( ::SireMol::AtomStructureEditor::*selectedAll_function_type)(  ) const;
            selectedAll_function_type selectedAll_function_value( &::SireMol::AtomStructureEditor::selectedAll );
            
            AtomStructureEditor_exposer.def( 
                "selectedAll"
                , selectedAll_function_value );
        
        }
        { //::SireMol::AtomStructureEditor::toString
        
            typedef ::QString ( ::SireMol::AtomStructureEditor::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::AtomStructureEditor::toString );
            
            AtomStructureEditor_exposer.def( 
                "toString"
                , toString_function_value );
        
        }
        { //::SireMol::AtomStructureEditor::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::AtomStructureEditor::typeName );
            
            AtomStructureEditor_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        { //::SireMol::AtomStructureEditor::what
        
            typedef char const * ( ::SireMol::AtomStructureEditor::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMol::AtomStructureEditor::what );
            
            AtomStructureEditor_exposer.def( 
                "what"
                , what_function_value );
        
        }
        AtomStructureEditor_exposer.staticmethod( "typeName" );
        AtomStructureEditor_exposer.def( "__copy__", &__copy__);
        AtomStructureEditor_exposer.def( "__deepcopy__", &__copy__);
        AtomStructureEditor_exposer.def( "clone", &__copy__);
        AtomStructureEditor_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::AtomStructureEditor >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AtomStructureEditor_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::AtomStructureEditor >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AtomStructureEditor_exposer.def( "__str__", &__str__< ::SireMol::AtomStructureEditor > );
        AtomStructureEditor_exposer.def( "__repr__", &__str__< ::SireMol::AtomStructureEditor > );
    }

}
