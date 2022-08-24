// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "CLJSoftIntraShiftFunction.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireMaths/multidouble.h"

#include "SireMaths/multifloat.h"

#include "SireMaths/multiint.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireUnits/units.h"

#include "SireVol/gridinfo.h"

#include "cljshiftfunction.h"

#include <QDebug>

#include <QElapsedTimer>

#include "cljshiftfunction.h"

SireMM::CLJSoftIntraShiftFunction __copy__(const SireMM::CLJSoftIntraShiftFunction &other){ return SireMM::CLJSoftIntraShiftFunction(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_CLJSoftIntraShiftFunction_class(){

    { //::SireMM::CLJSoftIntraShiftFunction
        typedef bp::class_< SireMM::CLJSoftIntraShiftFunction, bp::bases< SireMM::CLJSoftIntraFunction, SireMM::CLJIntraFunction, SireMM::CLJCutoffFunction, SireMM::CLJFunction, SireBase::Property > > CLJSoftIntraShiftFunction_exposer_t;
        CLJSoftIntraShiftFunction_exposer_t CLJSoftIntraShiftFunction_exposer = CLJSoftIntraShiftFunction_exposer_t( "CLJSoftIntraShiftFunction", "This CLJFunction calculates the intramolecular coulomb and LJ energy of the passed\nCLJAtoms using a force shifted electrostatics cutoff, and provides a soft-core\npotential that can soften molecules that are involved in free energy calculations\n\nAuthor: Christopher Woods\n", bp::init< >("") );
        bp::scope CLJSoftIntraShiftFunction_scope( CLJSoftIntraShiftFunction_exposer );
        CLJSoftIntraShiftFunction_exposer.def( bp::init< SireUnits::Dimension::Length >(( bp::arg("cutoff") ), "Copy constructor") );
        CLJSoftIntraShiftFunction_exposer.def( bp::init< SireUnits::Dimension::Length, SireUnits::Dimension::Length >(( bp::arg("coul_cutoff"), bp::arg("lj_cutoff") ), "") );
        CLJSoftIntraShiftFunction_exposer.def( bp::init< SireVol::Space const &, SireUnits::Dimension::Length >(( bp::arg("space"), bp::arg("cutoff") ), "") );
        CLJSoftIntraShiftFunction_exposer.def( bp::init< SireVol::Space const &, SireUnits::Dimension::Length, SireUnits::Dimension::Length >(( bp::arg("space"), bp::arg("coul_cutoff"), bp::arg("lj_cutoff") ), "") );
        CLJSoftIntraShiftFunction_exposer.def( bp::init< SireUnits::Dimension::Length, SireMM::CLJFunction::COMBINING_RULES >(( bp::arg("cutoff"), bp::arg("combining_rules") ), "") );
        CLJSoftIntraShiftFunction_exposer.def( bp::init< SireUnits::Dimension::Length, SireUnits::Dimension::Length, SireMM::CLJFunction::COMBINING_RULES >(( bp::arg("coul_cutoff"), bp::arg("lj_cutoff"), bp::arg("combining_rules") ), "") );
        CLJSoftIntraShiftFunction_exposer.def( bp::init< SireVol::Space const &, SireMM::CLJFunction::COMBINING_RULES >(( bp::arg("space"), bp::arg("combining_rules") ), "") );
        CLJSoftIntraShiftFunction_exposer.def( bp::init< SireVol::Space const &, SireUnits::Dimension::Length, SireMM::CLJFunction::COMBINING_RULES >(( bp::arg("space"), bp::arg("cutoff"), bp::arg("combining_rules") ), "") );
        CLJSoftIntraShiftFunction_exposer.def( bp::init< SireVol::Space const &, SireUnits::Dimension::Length, SireUnits::Dimension::Length, SireMM::CLJFunction::COMBINING_RULES >(( bp::arg("space"), bp::arg("coul_cutoff"), bp::arg("lj_cutoff"), bp::arg("combining_rules") ), "") );
        CLJSoftIntraShiftFunction_exposer.def( bp::init< SireMM::CLJSoftIntraShiftFunction const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMM::CLJSoftIntraShiftFunction::defaultShiftFunction
        
            typedef ::SireMM::CLJFunctionPtr ( *defaultShiftFunction_function_type )(  );
            defaultShiftFunction_function_type defaultShiftFunction_function_value( &::SireMM::CLJSoftIntraShiftFunction::defaultShiftFunction );
            
            CLJSoftIntraShiftFunction_exposer.def( 
                "defaultShiftFunction"
                , defaultShiftFunction_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        CLJSoftIntraShiftFunction_exposer.def( bp::self != bp::self );
        { //::SireMM::CLJSoftIntraShiftFunction::operator=
        
            typedef ::SireMM::CLJSoftIntraShiftFunction & ( ::SireMM::CLJSoftIntraShiftFunction::*assign_function_type)( ::SireMM::CLJSoftIntraShiftFunction const & ) ;
            assign_function_type assign_function_value( &::SireMM::CLJSoftIntraShiftFunction::operator= );
            
            CLJSoftIntraShiftFunction_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        CLJSoftIntraShiftFunction_exposer.def( bp::self == bp::self );
        { //::SireMM::CLJSoftIntraShiftFunction::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::CLJSoftIntraShiftFunction::typeName );
            
            CLJSoftIntraShiftFunction_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::CLJSoftIntraShiftFunction::what
        
            typedef char const * ( ::SireMM::CLJSoftIntraShiftFunction::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMM::CLJSoftIntraShiftFunction::what );
            
            CLJSoftIntraShiftFunction_exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        CLJSoftIntraShiftFunction_exposer.staticmethod( "defaultShiftFunction" );
        CLJSoftIntraShiftFunction_exposer.staticmethod( "typeName" );
        CLJSoftIntraShiftFunction_exposer.def( "__copy__", &__copy__);
        CLJSoftIntraShiftFunction_exposer.def( "__deepcopy__", &__copy__);
        CLJSoftIntraShiftFunction_exposer.def( "clone", &__copy__);
        CLJSoftIntraShiftFunction_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::CLJSoftIntraShiftFunction >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CLJSoftIntraShiftFunction_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::CLJSoftIntraShiftFunction >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CLJSoftIntraShiftFunction_exposer.def_pickle(sire_pickle_suite< ::SireMM::CLJSoftIntraShiftFunction >());
        CLJSoftIntraShiftFunction_exposer.def( "__str__", &__str__< ::SireMM::CLJSoftIntraShiftFunction > );
        CLJSoftIntraShiftFunction_exposer.def( "__repr__", &__str__< ::SireMM::CLJSoftIntraShiftFunction > );
    }

}
