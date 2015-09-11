// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "DataPoint.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireID/index.h"

#include "SireMaths/maths.h"

#include "SireStream/registeralternativename.h"

#include "SireStream/shareddatastream.h"

#include "fep.h"

#include "tostring.h"

#include "fep.h"

SireAnalysis::DataPoint __copy__(const SireAnalysis::DataPoint &other){ return SireAnalysis::DataPoint(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_DataPoint_class(){

    { //::SireAnalysis::DataPoint
        typedef bp::class_< SireAnalysis::DataPoint > DataPoint_exposer_t;
        DataPoint_exposer_t DataPoint_exposer = DataPoint_exposer_t( "DataPoint", bp::init< >() );
        bp::scope DataPoint_scope( DataPoint_exposer );
        DataPoint_exposer.def( bp::init< double, double >(( bp::arg("x"), bp::arg("y") )) );
        DataPoint_exposer.def( bp::init< double, double, double, double >(( bp::arg("x"), bp::arg("y"), bp::arg("xerror"), bp::arg("yerror") )) );
        DataPoint_exposer.def( bp::init< double, double, double, double, double, double >(( bp::arg("x"), bp::arg("y"), bp::arg("xminerror"), bp::arg("yminerror"), bp::arg("xmaxerror"), bp::arg("ymaxerror") )) );
        DataPoint_exposer.def( bp::init< SireAnalysis::DataPoint const & >(( bp::arg("other") )) );
        { //::SireAnalysis::DataPoint::equalWithinError
        
            typedef bool ( ::SireAnalysis::DataPoint::*equalWithinError_function_type)( ::SireAnalysis::DataPoint const & ) const;
            equalWithinError_function_type equalWithinError_function_value( &::SireAnalysis::DataPoint::equalWithinError );
            
            DataPoint_exposer.def( 
                "equalWithinError"
                , equalWithinError_function_value
                , ( bp::arg("other") ) );
        
        }
        { //::SireAnalysis::DataPoint::equalWithinMaxError
        
            typedef bool ( ::SireAnalysis::DataPoint::*equalWithinMaxError_function_type)( ::SireAnalysis::DataPoint const & ) const;
            equalWithinMaxError_function_type equalWithinMaxError_function_value( &::SireAnalysis::DataPoint::equalWithinMaxError );
            
            DataPoint_exposer.def( 
                "equalWithinMaxError"
                , equalWithinMaxError_function_value
                , ( bp::arg("other") ) );
        
        }
        { //::SireAnalysis::DataPoint::equalWithinMinError
        
            typedef bool ( ::SireAnalysis::DataPoint::*equalWithinMinError_function_type)( ::SireAnalysis::DataPoint const & ) const;
            equalWithinMinError_function_type equalWithinMinError_function_value( &::SireAnalysis::DataPoint::equalWithinMinError );
            
            DataPoint_exposer.def( 
                "equalWithinMinError"
                , equalWithinMinError_function_value
                , ( bp::arg("other") ) );
        
        }
        { //::SireAnalysis::DataPoint::hasError
        
            typedef bool ( ::SireAnalysis::DataPoint::*hasError_function_type)(  ) const;
            hasError_function_type hasError_function_value( &::SireAnalysis::DataPoint::hasError );
            
            DataPoint_exposer.def( 
                "hasError"
                , hasError_function_value );
        
        }
        { //::SireAnalysis::DataPoint::hasErrorRange
        
            typedef bool ( ::SireAnalysis::DataPoint::*hasErrorRange_function_type)(  ) const;
            hasErrorRange_function_type hasErrorRange_function_value( &::SireAnalysis::DataPoint::hasErrorRange );
            
            DataPoint_exposer.def( 
                "hasErrorRange"
                , hasErrorRange_function_value );
        
        }
        { //::SireAnalysis::DataPoint::hasXError
        
            typedef bool ( ::SireAnalysis::DataPoint::*hasXError_function_type)(  ) const;
            hasXError_function_type hasXError_function_value( &::SireAnalysis::DataPoint::hasXError );
            
            DataPoint_exposer.def( 
                "hasXError"
                , hasXError_function_value );
        
        }
        { //::SireAnalysis::DataPoint::hasXErrorRange
        
            typedef bool ( ::SireAnalysis::DataPoint::*hasXErrorRange_function_type)(  ) const;
            hasXErrorRange_function_type hasXErrorRange_function_value( &::SireAnalysis::DataPoint::hasXErrorRange );
            
            DataPoint_exposer.def( 
                "hasXErrorRange"
                , hasXErrorRange_function_value );
        
        }
        { //::SireAnalysis::DataPoint::hasYError
        
            typedef bool ( ::SireAnalysis::DataPoint::*hasYError_function_type)(  ) const;
            hasYError_function_type hasYError_function_value( &::SireAnalysis::DataPoint::hasYError );
            
            DataPoint_exposer.def( 
                "hasYError"
                , hasYError_function_value );
        
        }
        { //::SireAnalysis::DataPoint::hasYErrorRange
        
            typedef bool ( ::SireAnalysis::DataPoint::*hasYErrorRange_function_type)(  ) const;
            hasYErrorRange_function_type hasYErrorRange_function_value( &::SireAnalysis::DataPoint::hasYErrorRange );
            
            DataPoint_exposer.def( 
                "hasYErrorRange"
                , hasYErrorRange_function_value );
        
        }
        DataPoint_exposer.def( bp::self != bp::self );
        { //::SireAnalysis::DataPoint::operator=
        
            typedef ::SireAnalysis::DataPoint & ( ::SireAnalysis::DataPoint::*assign_function_type)( ::SireAnalysis::DataPoint const & ) ;
            assign_function_type assign_function_value( &::SireAnalysis::DataPoint::operator= );
            
            DataPoint_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        DataPoint_exposer.def( bp::self == bp::self );
        { //::SireAnalysis::DataPoint::toString
        
            typedef ::QString ( ::SireAnalysis::DataPoint::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireAnalysis::DataPoint::toString );
            
            DataPoint_exposer.def( 
                "toString"
                , toString_function_value );
        
        }
        { //::SireAnalysis::DataPoint::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireAnalysis::DataPoint::typeName );
            
            DataPoint_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        { //::SireAnalysis::DataPoint::what
        
            typedef char const * ( ::SireAnalysis::DataPoint::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireAnalysis::DataPoint::what );
            
            DataPoint_exposer.def( 
                "what"
                , what_function_value );
        
        }
        { //::SireAnalysis::DataPoint::x
        
            typedef double ( ::SireAnalysis::DataPoint::*x_function_type)(  ) const;
            x_function_type x_function_value( &::SireAnalysis::DataPoint::x );
            
            DataPoint_exposer.def( 
                "x"
                , x_function_value );
        
        }
        { //::SireAnalysis::DataPoint::xError
        
            typedef double ( ::SireAnalysis::DataPoint::*xError_function_type)(  ) const;
            xError_function_type xError_function_value( &::SireAnalysis::DataPoint::xError );
            
            DataPoint_exposer.def( 
                "xError"
                , xError_function_value );
        
        }
        { //::SireAnalysis::DataPoint::xMaxError
        
            typedef double ( ::SireAnalysis::DataPoint::*xMaxError_function_type)(  ) const;
            xMaxError_function_type xMaxError_function_value( &::SireAnalysis::DataPoint::xMaxError );
            
            DataPoint_exposer.def( 
                "xMaxError"
                , xMaxError_function_value );
        
        }
        { //::SireAnalysis::DataPoint::xMinError
        
            typedef double ( ::SireAnalysis::DataPoint::*xMinError_function_type)(  ) const;
            xMinError_function_type xMinError_function_value( &::SireAnalysis::DataPoint::xMinError );
            
            DataPoint_exposer.def( 
                "xMinError"
                , xMinError_function_value );
        
        }
        { //::SireAnalysis::DataPoint::y
        
            typedef double ( ::SireAnalysis::DataPoint::*y_function_type)(  ) const;
            y_function_type y_function_value( &::SireAnalysis::DataPoint::y );
            
            DataPoint_exposer.def( 
                "y"
                , y_function_value );
        
        }
        { //::SireAnalysis::DataPoint::yError
        
            typedef double ( ::SireAnalysis::DataPoint::*yError_function_type)(  ) const;
            yError_function_type yError_function_value( &::SireAnalysis::DataPoint::yError );
            
            DataPoint_exposer.def( 
                "yError"
                , yError_function_value );
        
        }
        { //::SireAnalysis::DataPoint::yMaxError
        
            typedef double ( ::SireAnalysis::DataPoint::*yMaxError_function_type)(  ) const;
            yMaxError_function_type yMaxError_function_value( &::SireAnalysis::DataPoint::yMaxError );
            
            DataPoint_exposer.def( 
                "yMaxError"
                , yMaxError_function_value );
        
        }
        { //::SireAnalysis::DataPoint::yMinError
        
            typedef double ( ::SireAnalysis::DataPoint::*yMinError_function_type)(  ) const;
            yMinError_function_type yMinError_function_value( &::SireAnalysis::DataPoint::yMinError );
            
            DataPoint_exposer.def( 
                "yMinError"
                , yMinError_function_value );
        
        }
        DataPoint_exposer.staticmethod( "typeName" );
        DataPoint_exposer.def( "__copy__", &__copy__);
        DataPoint_exposer.def( "__deepcopy__", &__copy__);
        DataPoint_exposer.def( "clone", &__copy__);
        DataPoint_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireAnalysis::DataPoint >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        DataPoint_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireAnalysis::DataPoint >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        DataPoint_exposer.def( "__str__", &__str__< ::SireAnalysis::DataPoint > );
        DataPoint_exposer.def( "__repr__", &__str__< ::SireAnalysis::DataPoint > );
    }

}
