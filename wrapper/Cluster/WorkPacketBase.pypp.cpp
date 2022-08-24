// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "WorkPacketBase.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "workpacket.h"

#include <QDebug>

#include <QTextStream>

#include "workpacket.h"

#include "Qt/qdatastream.hpp"

const char* pvt_get_name(const SireCluster::WorkPacketBase&){ return "SireCluster::WorkPacketBase";}

#include "Helpers/release_gil_policy.hpp"

void register_WorkPacketBase_class(){

    { //::SireCluster::WorkPacketBase
        typedef bp::class_< SireCluster::WorkPacketBase, boost::noncopyable > WorkPacketBase_exposer_t;
        WorkPacketBase_exposer_t WorkPacketBase_exposer = WorkPacketBase_exposer_t( "WorkPacketBase", "This is the base class of all WorkPackets. A WorkPacket\ncontains all of the code and input data for a piece of work,\nand also contains space to return the output and current\nprogress\n\nAuthor: Christopher Woods\n", bp::no_init );
        bp::scope WorkPacketBase_scope( WorkPacketBase_exposer );
        { //::SireCluster::WorkPacketBase::approximatePacketSize
        
            typedef int ( ::SireCluster::WorkPacketBase::*approximatePacketSize_function_type)(  ) const;
            approximatePacketSize_function_type approximatePacketSize_function_value( &::SireCluster::WorkPacketBase::approximatePacketSize );
            
            WorkPacketBase_exposer.def( 
                "approximatePacketSize"
                , approximatePacketSize_function_value
                , bp::release_gil_policy()
                , "Return the approximate maximum size (in bytes) of the WorkPacket. This\ndoesnt have to exact (or indeed accurate) - it is used\nto help the WorkPacket::pack() function reserve enough\nspace when serialising this packet to a binary array.\nThe only penalty of getting this wrong is that youll\neither allocate too much space, or be reallocating while\nthe packet is being written" );
        
        }
        { //::SireCluster::WorkPacketBase::hasFinished
        
            typedef bool ( ::SireCluster::WorkPacketBase::*hasFinished_function_type)(  ) const;
            hasFinished_function_type hasFinished_function_value( &::SireCluster::WorkPacketBase::hasFinished );
            
            WorkPacketBase_exposer.def( 
                "hasFinished"
                , hasFinished_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireCluster::WorkPacketBase::isError
        
            typedef bool ( ::SireCluster::WorkPacketBase::*isError_function_type)(  ) const;
            isError_function_type isError_function_value( &::SireCluster::WorkPacketBase::isError );
            
            WorkPacketBase_exposer.def( 
                "isError"
                , isError_function_value
                , bp::release_gil_policy()
                , "Return whether or not this is an Error WorkPacket" );
        
        }
        { //::SireCluster::WorkPacketBase::progress
        
            typedef float ( ::SireCluster::WorkPacketBase::*progress_function_type)(  ) const;
            progress_function_type progress_function_value( &::SireCluster::WorkPacketBase::progress );
            
            WorkPacketBase_exposer.def( 
                "progress"
                , progress_function_value
                , bp::release_gil_policy()
                , "Return the current progress of the work (percentage)" );
        
        }
        { //::SireCluster::WorkPacketBase::runChunk
        
            typedef void ( ::SireCluster::WorkPacketBase::*runChunk_function_type)(  ) ;
            runChunk_function_type runChunk_function_value( &::SireCluster::WorkPacketBase::runChunk );
            
            WorkPacketBase_exposer.def( 
                "runChunk"
                , runChunk_function_value
                , bp::release_gil_policy()
                , "Perform one chunk of the calculation - Any exceptions are\ncaught in WorkPacket::runChunk, where that are converted\ninto an ErrorPacket" );
        
        }
        { //::SireCluster::WorkPacketBase::shouldPack
        
            typedef bool ( ::SireCluster::WorkPacketBase::*shouldPack_function_type)(  ) const;
            shouldPack_function_type shouldPack_function_value( &::SireCluster::WorkPacketBase::shouldPack );
            
            WorkPacketBase_exposer.def( 
                "shouldPack"
                , shouldPack_function_value
                , bp::release_gil_policy()
                , "Return whether or not this work packet should be stored\nas a binary array - this is used by Promise to work out\nhow to store the initial WorkPacket state. Only large\npackets should be binary packed (as they are then\ncompressed)" );
        
        }
        { //::SireCluster::WorkPacketBase::throwError
        
            typedef void ( ::SireCluster::WorkPacketBase::*throwError_function_type)(  ) const;
            throwError_function_type throwError_function_value( &::SireCluster::WorkPacketBase::throwError );
            
            WorkPacketBase_exposer.def( 
                "throwError"
                , throwError_function_value
                , bp::release_gil_policy()
                , "Throw the error, if this is in an error state" );
        
        }
        { //::SireCluster::WorkPacketBase::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireCluster::WorkPacketBase::typeName );
            
            WorkPacketBase_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireCluster::WorkPacketBase::wasAborted
        
            typedef bool ( ::SireCluster::WorkPacketBase::*wasAborted_function_type)(  ) const;
            wasAborted_function_type wasAborted_function_value( &::SireCluster::WorkPacketBase::wasAborted );
            
            WorkPacketBase_exposer.def( 
                "wasAborted"
                , wasAborted_function_value
                , bp::release_gil_policy()
                , "Whether or not the job has been aborted" );
        
        }
        { //::SireCluster::WorkPacketBase::what
        
            typedef char const * ( ::SireCluster::WorkPacketBase::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireCluster::WorkPacketBase::what );
            
            WorkPacketBase_exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        WorkPacketBase_exposer.staticmethod( "typeName" );
        WorkPacketBase_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireCluster::WorkPacketBase >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        WorkPacketBase_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireCluster::WorkPacketBase >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        WorkPacketBase_exposer.def_pickle(sire_pickle_suite< ::SireCluster::WorkPacketBase >());
        WorkPacketBase_exposer.def( "__str__", &pvt_get_name);
        WorkPacketBase_exposer.def( "__repr__", &pvt_get_name);
    }

}
