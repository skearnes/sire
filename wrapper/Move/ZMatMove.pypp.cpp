// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "ZMatMove.pypp.hpp"

namespace bp = boost::python;

#include "SireMol/atomidx.h"

#include "SireMol/core.h"

#include "SireMol/molecule.h"

#include "SireMol/moleditor.h"

#include "SireMol/mover.hpp"

#include "SireMol/partialmolecule.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireSystem/system.h"

#include "SireUnits/dimensions.h"

#include "SireUnits/temperature.h"

#include "ensemble.h"

#include "zmatmove.h"

#include "zmatrix.h"

#include <QDebug>

#include <QTime>

#include "zmatmove.h"

SireMove::ZMatMove __copy__(const SireMove::ZMatMove &other){ return SireMove::ZMatMove(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_ZMatMove_class(){

    { //::SireMove::ZMatMove
        typedef bp::class_< SireMove::ZMatMove, bp::bases< SireMove::MonteCarlo, SireMove::Move, SireBase::Property > > ZMatMove_exposer_t;
        ZMatMove_exposer_t ZMatMove_exposer = ZMatMove_exposer_t( "ZMatMove", "This class implements a z-matrix based intramolecular Monte Carlo\nmove that may be applied to a random molecule (or part of a molecule)\nwithin a MoleculeGroup\n\nAuthor: Christopher Woods\n", bp::init< bp::optional< SireBase::PropertyMap const & > >(( bp::arg("map")=SireBase::PropertyMap() ), "Null constructor") );
        bp::scope ZMatMove_scope( ZMatMove_exposer );
        ZMatMove_exposer.def( bp::init< SireMol::MoleculeGroup const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("molgroup"), bp::arg("map")=SireBase::PropertyMap() ), "Construct the z-matrix move for the passed group of molecules") );
        ZMatMove_exposer.def( bp::init< SireMove::Sampler const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("sampler"), bp::arg("map")=SireBase::PropertyMap() ), "Construct the z-matrix move that samples molecules from the\npassed sampler") );
        ZMatMove_exposer.def( bp::init< SireMove::ZMatMove const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMove::ZMatMove::moleculeGroup
        
            typedef ::SireMol::MoleculeGroup const & ( ::SireMove::ZMatMove::*moleculeGroup_function_type)(  ) const;
            moleculeGroup_function_type moleculeGroup_function_value( &::SireMove::ZMatMove::moleculeGroup );
            
            ZMatMove_exposer.def( 
                "moleculeGroup"
                , moleculeGroup_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return the molecule group that is sampled for this move" );
        
        }
        { //::SireMove::ZMatMove::move
        
            typedef void ( ::SireMove::ZMatMove::*move_function_type)( ::SireSystem::System &,int,bool ) ;
            move_function_type move_function_value( &::SireMove::ZMatMove::move );
            
            ZMatMove_exposer.def( 
                "move"
                , move_function_value
                , ( bp::arg("system"), bp::arg("nmoves"), bp::arg("record_stats")=(bool)(true) )
                , "Actually perform nmoves moves of the molecules in the\nsystem system, optionally recording simulation statistics\nif record_stats is true" );
        
        }
        ZMatMove_exposer.def( bp::self != bp::self );
        { //::SireMove::ZMatMove::operator=
        
            typedef ::SireMove::ZMatMove & ( ::SireMove::ZMatMove::*assign_function_type)( ::SireMove::ZMatMove const & ) ;
            assign_function_type assign_function_value( &::SireMove::ZMatMove::operator= );
            
            ZMatMove_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        ZMatMove_exposer.def( bp::self == bp::self );
        { //::SireMove::ZMatMove::sampler
        
            typedef ::SireMove::Sampler const & ( ::SireMove::ZMatMove::*sampler_function_type)(  ) const;
            sampler_function_type sampler_function_value( &::SireMove::ZMatMove::sampler );
            
            ZMatMove_exposer.def( 
                "sampler"
                , sampler_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return the sampler used to sample molecules to move" );
        
        }
        { //::SireMove::ZMatMove::setGenerator
        
            typedef void ( ::SireMove::ZMatMove::*setGenerator_function_type)( ::SireMaths::RanGenerator const & ) ;
            setGenerator_function_type setGenerator_function_value( &::SireMove::ZMatMove::setGenerator );
            
            ZMatMove_exposer.def( 
                "setGenerator"
                , setGenerator_function_value
                , ( bp::arg("rangenerator") )
                , bp::release_gil_policy()
                , "Set the random number generator used to generate the random\nnumber used for this move" );
        
        }
        { //::SireMove::ZMatMove::setSampler
        
            typedef void ( ::SireMove::ZMatMove::*setSampler_function_type)( ::SireMove::Sampler const & ) ;
            setSampler_function_type setSampler_function_value( &::SireMove::ZMatMove::setSampler );
            
            ZMatMove_exposer.def( 
                "setSampler"
                , setSampler_function_value
                , ( bp::arg("sampler") )
                , bp::release_gil_policy()
                , "Set the sampler used to sample molecules for this move" );
        
        }
        { //::SireMove::ZMatMove::setSampler
        
            typedef void ( ::SireMove::ZMatMove::*setSampler_function_type)( ::SireMol::MoleculeGroup const & ) ;
            setSampler_function_type setSampler_function_value( &::SireMove::ZMatMove::setSampler );
            
            ZMatMove_exposer.def( 
                "setSampler"
                , setSampler_function_value
                , ( bp::arg("molgroup") )
                , bp::release_gil_policy()
                , "Set the sampler so that it draws molecules uniformly from the\nmolecule group molgroup" );
        
        }
        { //::SireMove::ZMatMove::setSynchronisedAngles
        
            typedef void ( ::SireMove::ZMatMove::*setSynchronisedAngles_function_type)( bool ) ;
            setSynchronisedAngles_function_type setSynchronisedAngles_function_value( &::SireMove::ZMatMove::setSynchronisedAngles );
            
            ZMatMove_exposer.def( 
                "setSynchronisedAngles"
                , setSynchronisedAngles_function_value
                , ( bp::arg("on") )
                , bp::release_gil_policy()
                , "Set whether or not to synchronise all angle moves for all molecules" );
        
        }
        { //::SireMove::ZMatMove::setSynchronisedBonds
        
            typedef void ( ::SireMove::ZMatMove::*setSynchronisedBonds_function_type)( bool ) ;
            setSynchronisedBonds_function_type setSynchronisedBonds_function_value( &::SireMove::ZMatMove::setSynchronisedBonds );
            
            ZMatMove_exposer.def( 
                "setSynchronisedBonds"
                , setSynchronisedBonds_function_value
                , ( bp::arg("on") )
                , bp::release_gil_policy()
                , "Set whether or not to synchronise all bond moves for all molecules" );
        
        }
        { //::SireMove::ZMatMove::setSynchronisedDihedrals
        
            typedef void ( ::SireMove::ZMatMove::*setSynchronisedDihedrals_function_type)( bool ) ;
            setSynchronisedDihedrals_function_type setSynchronisedDihedrals_function_value( &::SireMove::ZMatMove::setSynchronisedDihedrals );
            
            ZMatMove_exposer.def( 
                "setSynchronisedDihedrals"
                , setSynchronisedDihedrals_function_value
                , ( bp::arg("on") )
                , bp::release_gil_policy()
                , "Set whether or not to synchronise all dihedral moves for all molecules" );
        
        }
        { //::SireMove::ZMatMove::setSynchronisedMotion
        
            typedef void ( ::SireMove::ZMatMove::*setSynchronisedMotion_function_type)( bool ) ;
            setSynchronisedMotion_function_type setSynchronisedMotion_function_value( &::SireMove::ZMatMove::setSynchronisedMotion );
            
            ZMatMove_exposer.def( 
                "setSynchronisedMotion"
                , setSynchronisedMotion_function_value
                , ( bp::arg("on") )
                , bp::release_gil_policy()
                , "Set whether or not to synchronise all motion for all molecules\nin the group" );
        
        }
        { //::SireMove::ZMatMove::setZMatrixProperty
        
            typedef void ( ::SireMove::ZMatMove::*setZMatrixProperty_function_type)( ::SireBase::PropertyName const & ) ;
            setZMatrixProperty_function_type setZMatrixProperty_function_value( &::SireMove::ZMatMove::setZMatrixProperty );
            
            ZMatMove_exposer.def( 
                "setZMatrixProperty"
                , setZMatrixProperty_function_value
                , ( bp::arg("property") )
                , bp::release_gil_policy()
                , "Set the name of the property used to find the z-matrix of each molecule" );
        
        }
        { //::SireMove::ZMatMove::synchronisedAngles
        
            typedef bool ( ::SireMove::ZMatMove::*synchronisedAngles_function_type)(  ) const;
            synchronisedAngles_function_type synchronisedAngles_function_value( &::SireMove::ZMatMove::synchronisedAngles );
            
            ZMatMove_exposer.def( 
                "synchronisedAngles"
                , synchronisedAngles_function_value
                , bp::release_gil_policy()
                , "Return whether or not all angle moves for all molecules\nare synchronised" );
        
        }
        { //::SireMove::ZMatMove::synchronisedBonds
        
            typedef bool ( ::SireMove::ZMatMove::*synchronisedBonds_function_type)(  ) const;
            synchronisedBonds_function_type synchronisedBonds_function_value( &::SireMove::ZMatMove::synchronisedBonds );
            
            ZMatMove_exposer.def( 
                "synchronisedBonds"
                , synchronisedBonds_function_value
                , bp::release_gil_policy()
                , "Return whether or not all bond moves for all molecules\nare synchronised" );
        
        }
        { //::SireMove::ZMatMove::synchronisedDihedrals
        
            typedef bool ( ::SireMove::ZMatMove::*synchronisedDihedrals_function_type)(  ) const;
            synchronisedDihedrals_function_type synchronisedDihedrals_function_value( &::SireMove::ZMatMove::synchronisedDihedrals );
            
            ZMatMove_exposer.def( 
                "synchronisedDihedrals"
                , synchronisedDihedrals_function_value
                , bp::release_gil_policy()
                , "Return whether or not all dihedral moves for all molecules\nare synchronised" );
        
        }
        { //::SireMove::ZMatMove::synchronisedMotion
        
            typedef bool ( ::SireMove::ZMatMove::*synchronisedMotion_function_type)(  ) const;
            synchronisedMotion_function_type synchronisedMotion_function_value( &::SireMove::ZMatMove::synchronisedMotion );
            
            ZMatMove_exposer.def( 
                "synchronisedMotion"
                , synchronisedMotion_function_value
                , bp::release_gil_policy()
                , "Return whether or not all moves for all molecules are synchronised" );
        
        }
        { //::SireMove::ZMatMove::toString
        
            typedef ::QString ( ::SireMove::ZMatMove::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMove::ZMatMove::toString );
            
            ZMatMove_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "Return a string representation of this move" );
        
        }
        { //::SireMove::ZMatMove::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMove::ZMatMove::typeName );
            
            ZMatMove_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMove::ZMatMove::zmatrixProperty
        
            typedef ::SireBase::PropertyName const & ( ::SireMove::ZMatMove::*zmatrixProperty_function_type)(  ) const;
            zmatrixProperty_function_type zmatrixProperty_function_value( &::SireMove::ZMatMove::zmatrixProperty );
            
            ZMatMove_exposer.def( 
                "zmatrixProperty"
                , zmatrixProperty_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the property used to find the z-matrix of each molecule" );
        
        }
        ZMatMove_exposer.staticmethod( "typeName" );
        ZMatMove_exposer.def( "__copy__", &__copy__);
        ZMatMove_exposer.def( "__deepcopy__", &__copy__);
        ZMatMove_exposer.def( "clone", &__copy__);
        ZMatMove_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMove::ZMatMove >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ZMatMove_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMove::ZMatMove >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ZMatMove_exposer.def_pickle(sire_pickle_suite< ::SireMove::ZMatMove >());
        ZMatMove_exposer.def( "__str__", &__str__< ::SireMove::ZMatMove > );
        ZMatMove_exposer.def( "__repr__", &__str__< ::SireMove::ZMatMove > );
    }

}
