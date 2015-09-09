// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "WeightedMoves.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireSystem/system.h"

#include "SireUnits/temperature.h"

#include "SireUnits/units.h"

#include "move.h"

#include "weightedmoves.h"

#include "weightedmoves.h"

SireMove::WeightedMoves __copy__(const SireMove::WeightedMoves &other){ return SireMove::WeightedMoves(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/len.hpp"

void register_WeightedMoves_class(){

    { //::SireMove::WeightedMoves
        typedef bp::class_< SireMove::WeightedMoves, bp::bases< SireMove::Moves, SireBase::Property > > WeightedMoves_exposer_t;
        WeightedMoves_exposer_t WeightedMoves_exposer = WeightedMoves_exposer_t( "WeightedMoves", bp::init< >() );
        bp::scope WeightedMoves_scope( WeightedMoves_exposer );
        WeightedMoves_exposer.def( bp::init< SireMove::WeightedMoves const & >(( bp::arg("other") )) );
        { //::SireMove::WeightedMoves::add
        
            typedef void ( ::SireMove::WeightedMoves::*add_function_type)( ::SireMove::Move const &,double ) ;
            add_function_type add_function_value( &::SireMove::WeightedMoves::add );
            
            WeightedMoves_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("move"), bp::arg("weight")=1 ) );
        
        }
        { //::SireMove::WeightedMoves::clearStatistics
        
            typedef void ( ::SireMove::WeightedMoves::*clearStatistics_function_type)(  ) ;
            clearStatistics_function_type clearStatistics_function_value( &::SireMove::WeightedMoves::clearStatistics );
            
            WeightedMoves_exposer.def( 
                "clearStatistics"
                , clearStatistics_function_value );
        
        }
        { //::SireMove::WeightedMoves::energyComponent
        
            typedef ::SireCAS::Symbol const & ( ::SireMove::WeightedMoves::*energyComponent_function_type)(  ) const;
            energyComponent_function_type energyComponent_function_value( &::SireMove::WeightedMoves::energyComponent );
            
            WeightedMoves_exposer.def( 
                "energyComponent"
                , energyComponent_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireMove::WeightedMoves::generator
        
            typedef ::SireMaths::RanGenerator const & ( ::SireMove::WeightedMoves::*generator_function_type)(  ) const;
            generator_function_type generator_function_value( &::SireMove::WeightedMoves::generator );
            
            WeightedMoves_exposer.def( 
                "generator"
                , generator_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireMove::WeightedMoves::hasCombinedSpaceProperty
        
            typedef bool ( ::SireMove::WeightedMoves::*hasCombinedSpaceProperty_function_type)(  ) const;
            hasCombinedSpaceProperty_function_type hasCombinedSpaceProperty_function_value( &::SireMove::WeightedMoves::hasCombinedSpaceProperty );
            
            WeightedMoves_exposer.def( 
                "hasCombinedSpaceProperty"
                , hasCombinedSpaceProperty_function_value );
        
        }
        { //::SireMove::WeightedMoves::move
        
            typedef ::SireSystem::System ( ::SireMove::WeightedMoves::*move_function_type)( ::SireSystem::System const &,int,bool ) ;
            move_function_type move_function_value( &::SireMove::WeightedMoves::move );
            
            WeightedMoves_exposer.def( 
                "move"
                , move_function_value
                , ( bp::arg("system"), bp::arg("nmoves"), bp::arg("record_stats") ) );
        
        }
        { //::SireMove::WeightedMoves::moves
        
            typedef ::QList< SireBase::PropPtr< SireMove::Move > > ( ::SireMove::WeightedMoves::*moves_function_type)(  ) const;
            moves_function_type moves_function_value( &::SireMove::WeightedMoves::moves );
            
            WeightedMoves_exposer.def( 
                "moves"
                , moves_function_value );
        
        }
        WeightedMoves_exposer.def( bp::self != bp::self );
        { //::SireMove::WeightedMoves::operator=
        
            typedef ::SireMove::WeightedMoves & ( ::SireMove::WeightedMoves::*assign_function_type)( ::SireMove::WeightedMoves const & ) ;
            assign_function_type assign_function_value( &::SireMove::WeightedMoves::operator= );
            
            WeightedMoves_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        WeightedMoves_exposer.def( bp::self == bp::self );
        { //::SireMove::WeightedMoves::setCombinedSpaceProperty
        
            typedef void ( ::SireMove::WeightedMoves::*setCombinedSpaceProperty_function_type)( ::SireBase::PropertyName const & ) ;
            setCombinedSpaceProperty_function_type setCombinedSpaceProperty_function_value( &::SireMove::WeightedMoves::setCombinedSpaceProperty );
            
            WeightedMoves_exposer.def( 
                "setCombinedSpaceProperty"
                , setCombinedSpaceProperty_function_value
                , ( bp::arg("spaceproperty") ) );
        
        }
        { //::SireMove::WeightedMoves::setEnergyComponent
        
            typedef void ( ::SireMove::WeightedMoves::*setEnergyComponent_function_type)( ::SireCAS::Symbol const & ) ;
            setEnergyComponent_function_type setEnergyComponent_function_value( &::SireMove::WeightedMoves::setEnergyComponent );
            
            WeightedMoves_exposer.def( 
                "setEnergyComponent"
                , setEnergyComponent_function_value
                , ( bp::arg("component") ) );
        
        }
        { //::SireMove::WeightedMoves::setGenerator
        
            typedef void ( ::SireMove::WeightedMoves::*setGenerator_function_type)( ::SireMaths::RanGenerator const & ) ;
            setGenerator_function_type setGenerator_function_value( &::SireMove::WeightedMoves::setGenerator );
            
            WeightedMoves_exposer.def( 
                "setGenerator"
                , setGenerator_function_value
                , ( bp::arg("rangenerator") ) );
        
        }
        { //::SireMove::WeightedMoves::setSpaceProperty
        
            typedef void ( ::SireMove::WeightedMoves::*setSpaceProperty_function_type)( ::SireBase::PropertyName const & ) ;
            setSpaceProperty_function_type setSpaceProperty_function_value( &::SireMove::WeightedMoves::setSpaceProperty );
            
            WeightedMoves_exposer.def( 
                "setSpaceProperty"
                , setSpaceProperty_function_value
                , ( bp::arg("spaceproperty") ) );
        
        }
        { //::SireMove::WeightedMoves::spaceProperty
        
            typedef ::SireBase::PropertyName const & ( ::SireMove::WeightedMoves::*spaceProperty_function_type)(  ) const;
            spaceProperty_function_type spaceProperty_function_value( &::SireMove::WeightedMoves::spaceProperty );
            
            WeightedMoves_exposer.def( 
                "spaceProperty"
                , spaceProperty_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireMove::WeightedMoves::toString
        
            typedef ::QString ( ::SireMove::WeightedMoves::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMove::WeightedMoves::toString );
            
            WeightedMoves_exposer.def( 
                "toString"
                , toString_function_value );
        
        }
        { //::SireMove::WeightedMoves::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMove::WeightedMoves::typeName );
            
            WeightedMoves_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        WeightedMoves_exposer.staticmethod( "typeName" );
        WeightedMoves_exposer.def( "__copy__", &__copy__);
        WeightedMoves_exposer.def( "__deepcopy__", &__copy__);
        WeightedMoves_exposer.def( "clone", &__copy__);
        WeightedMoves_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMove::WeightedMoves >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        WeightedMoves_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMove::WeightedMoves >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        WeightedMoves_exposer.def( "__str__", &__str__< ::SireMove::WeightedMoves > );
        WeightedMoves_exposer.def( "__repr__", &__str__< ::SireMove::WeightedMoves > );
        WeightedMoves_exposer.def( "__len__", &__len_size< ::SireMove::WeightedMoves > );
    }

}
