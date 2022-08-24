// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "CharmmPSF.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/parallel.h"

#include "SireBase/stringproperty.h"

#include "SireCAS/sum.h"

#include "SireCAS/trigfuncs.h"

#include "SireError/errors.h"

#include "SireIO/charmmpsf.h"

#include "SireIO/errors.h"

#include "SireMM/amberparams.h"

#include "SireMM/atomljs.h"

#include "SireMM/fouratomfunctions.h"

#include "SireMM/internalff.h"

#include "SireMM/threeatomfunctions.h"

#include "SireMM/twoatomfunctions.h"

#include "SireMol/atomcharges.h"

#include "SireMol/atomelements.h"

#include "SireMol/atommasses.h"

#include "SireMol/connectivity.h"

#include "SireMol/core.h"

#include "SireMol/molecule.h"

#include "SireMol/moleditor.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireSystem/system.h"

#include "SireUnits/units.h"

#include "SireVol/periodicbox.h"

#include "SireVol/triclinicbox.h"

#include "charmmpsf.h"

#include <QDateTime>

#include <QFileInfo>

#include <QtMath>

#include "charmmpsf.h"

SireIO::CharmmPSF __copy__(const SireIO::CharmmPSF &other){ return SireIO::CharmmPSF(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_CharmmPSF_class(){

    { //::SireIO::CharmmPSF
        typedef bp::class_< SireIO::CharmmPSF, bp::bases< SireIO::MoleculeParser, SireBase::Property > > CharmmPSF_exposer_t;
        CharmmPSF_exposer_t CharmmPSF_exposer = CharmmPSF_exposer_t( "CharmmPSF", "This class holds a parser for reading and writing CHARMM PSF files.\n\nAuthor: Lester Hedges\n", bp::init< >("Constructor") );
        bp::scope CharmmPSF_scope( CharmmPSF_exposer );
        CharmmPSF_exposer.def( bp::init< QString const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("filename"), bp::arg("map")=SireBase::PropertyMap() ), "Construct to read in the data from the file called filename. The\npassed property map can be used to pass extra parameters to control\nthe parsing") );
        CharmmPSF_exposer.def( bp::init< QStringList const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("lines"), bp::arg("map")=SireBase::PropertyMap() ), "Construct to read in the data from the passed text lines. The\npassed property map can be used to pass extra parameters to control\nthe parsing") );
        CharmmPSF_exposer.def( bp::init< SireSystem::System const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("system"), bp::arg("map")=SireBase::PropertyMap() ), "Construct this parser by extracting all necessary information from the\npassed SireSystem::System, looking for the properties that are specified\nin the passed property map") );
        CharmmPSF_exposer.def( bp::init< SireIO::CharmmPSF const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireIO::CharmmPSF::canFollow
        
            typedef bool ( ::SireIO::CharmmPSF::*canFollow_function_type)(  ) const;
            canFollow_function_type canFollow_function_value( &::SireIO::CharmmPSF::canFollow );
            
            CharmmPSF_exposer.def( 
                "canFollow"
                , canFollow_function_value
                , bp::release_gil_policy()
                , "Return whether or not this parser can follow another lead parser, and add\ndata to an existing molecular system. The CharmmPSF parser cannot follow." );
        
        }
        { //::SireIO::CharmmPSF::construct
        
            typedef ::SireIO::MoleculeParserPtr ( ::SireIO::CharmmPSF::*construct_function_type)( ::QString const &,::SireBase::PropertyMap const & ) const;
            construct_function_type construct_function_value( &::SireIO::CharmmPSF::construct );
            
            CharmmPSF_exposer.def( 
                "construct"
                , construct_function_value
                , ( bp::arg("filename"), bp::arg("map") )
                , bp::release_gil_policy()
                , "Return the parser that has been constructed by reading in the passed\nfile using the passed properties" );
        
        }
        { //::SireIO::CharmmPSF::construct
        
            typedef ::SireIO::MoleculeParserPtr ( ::SireIO::CharmmPSF::*construct_function_type)( ::QStringList const &,::SireBase::PropertyMap const & ) const;
            construct_function_type construct_function_value( &::SireIO::CharmmPSF::construct );
            
            CharmmPSF_exposer.def( 
                "construct"
                , construct_function_value
                , ( bp::arg("lines"), bp::arg("map") )
                , bp::release_gil_policy()
                , "Return the parser that has been constructed by reading in the passed\ntext lines using the passed properties" );
        
        }
        { //::SireIO::CharmmPSF::construct
        
            typedef ::SireIO::MoleculeParserPtr ( ::SireIO::CharmmPSF::*construct_function_type)( ::SireSystem::System const &,::SireBase::PropertyMap const & ) const;
            construct_function_type construct_function_value( &::SireIO::CharmmPSF::construct );
            
            CharmmPSF_exposer.def( 
                "construct"
                , construct_function_value
                , ( bp::arg("system"), bp::arg("map") )
                , bp::release_gil_policy()
                , "Return the parser that has been constructed by extract all necessary\ndata from the passed SireSystem::System using the specified properties" );
        
        }
        { //::SireIO::CharmmPSF::formatDescription
        
            typedef ::QString ( ::SireIO::CharmmPSF::*formatDescription_function_type)(  ) const;
            formatDescription_function_type formatDescription_function_value( &::SireIO::CharmmPSF::formatDescription );
            
            CharmmPSF_exposer.def( 
                "formatDescription"
                , formatDescription_function_value
                , bp::release_gil_policy()
                , "Return a description of the file format" );
        
        }
        { //::SireIO::CharmmPSF::formatName
        
            typedef ::QString ( ::SireIO::CharmmPSF::*formatName_function_type)(  ) const;
            formatName_function_type formatName_function_value( &::SireIO::CharmmPSF::formatName );
            
            CharmmPSF_exposer.def( 
                "formatName"
                , formatName_function_value
                , bp::release_gil_policy()
                , "Return the format name that is used to identify this file format within Sire" );
        
        }
        { //::SireIO::CharmmPSF::formatSuffix
        
            typedef ::QStringList ( ::SireIO::CharmmPSF::*formatSuffix_function_type)(  ) const;
            formatSuffix_function_type formatSuffix_function_value( &::SireIO::CharmmPSF::formatSuffix );
            
            CharmmPSF_exposer.def( 
                "formatSuffix"
                , formatSuffix_function_value
                , bp::release_gil_policy()
                , "Return the suffixes that these files are normally associated with" );
        
        }
        { //::SireIO::CharmmPSF::isLead
        
            typedef bool ( ::SireIO::CharmmPSF::*isLead_function_type)(  ) const;
            isLead_function_type isLead_function_value( &::SireIO::CharmmPSF::isLead );
            
            CharmmPSF_exposer.def( 
                "isLead"
                , isLead_function_value
                , bp::release_gil_policy()
                , "Return whether or not this is a lead parser. The lead parser is responsible\nfor starting the process of turning the parsed file into the System. There\nmust be one and one-only lead parser in a set of parsers creating a System" );
        
        }
        { //::SireIO::CharmmPSF::nAngles
        
            typedef int ( ::SireIO::CharmmPSF::*nAngles_function_type)(  ) const;
            nAngles_function_type nAngles_function_value( &::SireIO::CharmmPSF::nAngles );
            
            CharmmPSF_exposer.def( 
                "nAngles"
                , nAngles_function_value
                , bp::release_gil_policy()
                , "Return the number of angle records." );
        
        }
        { //::SireIO::CharmmPSF::nAngles
        
            typedef int ( ::SireIO::CharmmPSF::*nAngles_function_type)( int ) const;
            nAngles_function_type nAngles_function_value( &::SireIO::CharmmPSF::nAngles );
            
            CharmmPSF_exposer.def( 
                "nAngles"
                , nAngles_function_value
                , ( bp::arg("i") )
                , bp::release_gil_policy()
                , "Return the number of angles in molecule i." );
        
        }
        { //::SireIO::CharmmPSF::nAtoms
        
            typedef int ( ::SireIO::CharmmPSF::*nAtoms_function_type)(  ) const;
            nAtoms_function_type nAtoms_function_value( &::SireIO::CharmmPSF::nAtoms );
            
            CharmmPSF_exposer.def( 
                "nAtoms"
                , nAtoms_function_value
                , bp::release_gil_policy()
                , "Return the number of atom records." );
        
        }
        { //::SireIO::CharmmPSF::nAtoms
        
            typedef int ( ::SireIO::CharmmPSF::*nAtoms_function_type)( int ) const;
            nAtoms_function_type nAtoms_function_value( &::SireIO::CharmmPSF::nAtoms );
            
            CharmmPSF_exposer.def( 
                "nAtoms"
                , nAtoms_function_value
                , ( bp::arg("i") )
                , bp::release_gil_policy()
                , "Return the number of atoms in molecule i." );
        
        }
        { //::SireIO::CharmmPSF::nBonds
        
            typedef int ( ::SireIO::CharmmPSF::*nBonds_function_type)(  ) const;
            nBonds_function_type nBonds_function_value( &::SireIO::CharmmPSF::nBonds );
            
            CharmmPSF_exposer.def( 
                "nBonds"
                , nBonds_function_value
                , bp::release_gil_policy()
                , "Return the number of bond records." );
        
        }
        { //::SireIO::CharmmPSF::nBonds
        
            typedef int ( ::SireIO::CharmmPSF::*nBonds_function_type)( int ) const;
            nBonds_function_type nBonds_function_value( &::SireIO::CharmmPSF::nBonds );
            
            CharmmPSF_exposer.def( 
                "nBonds"
                , nBonds_function_value
                , ( bp::arg("i") )
                , bp::release_gil_policy()
                , "Return the number of bonds in molecule i." );
        
        }
        { //::SireIO::CharmmPSF::nCrossTerms
        
            typedef int ( ::SireIO::CharmmPSF::*nCrossTerms_function_type)(  ) const;
            nCrossTerms_function_type nCrossTerms_function_value( &::SireIO::CharmmPSF::nCrossTerms );
            
            CharmmPSF_exposer.def( 
                "nCrossTerms"
                , nCrossTerms_function_value
                , bp::release_gil_policy()
                , "Return the number of cross-term records." );
        
        }
        { //::SireIO::CharmmPSF::nCrossTerms
        
            typedef int ( ::SireIO::CharmmPSF::*nCrossTerms_function_type)( int ) const;
            nCrossTerms_function_type nCrossTerms_function_value( &::SireIO::CharmmPSF::nCrossTerms );
            
            CharmmPSF_exposer.def( 
                "nCrossTerms"
                , nCrossTerms_function_value
                , ( bp::arg("i") )
                , bp::release_gil_policy()
                , "Return the number of cross-terms in molecule i." );
        
        }
        { //::SireIO::CharmmPSF::nDihedrals
        
            typedef int ( ::SireIO::CharmmPSF::*nDihedrals_function_type)(  ) const;
            nDihedrals_function_type nDihedrals_function_value( &::SireIO::CharmmPSF::nDihedrals );
            
            CharmmPSF_exposer.def( 
                "nDihedrals"
                , nDihedrals_function_value
                , bp::release_gil_policy()
                , "Return the number of dihedral records." );
        
        }
        { //::SireIO::CharmmPSF::nDihedrals
        
            typedef int ( ::SireIO::CharmmPSF::*nDihedrals_function_type)( int ) const;
            nDihedrals_function_type nDihedrals_function_value( &::SireIO::CharmmPSF::nDihedrals );
            
            CharmmPSF_exposer.def( 
                "nDihedrals"
                , nDihedrals_function_value
                , ( bp::arg("i") )
                , bp::release_gil_policy()
                , "Return the number of dihedrals in molecule i." );
        
        }
        { //::SireIO::CharmmPSF::nImpropers
        
            typedef int ( ::SireIO::CharmmPSF::*nImpropers_function_type)(  ) const;
            nImpropers_function_type nImpropers_function_value( &::SireIO::CharmmPSF::nImpropers );
            
            CharmmPSF_exposer.def( 
                "nImpropers"
                , nImpropers_function_value
                , bp::release_gil_policy()
                , "Return the number of improper records." );
        
        }
        { //::SireIO::CharmmPSF::nImpropers
        
            typedef int ( ::SireIO::CharmmPSF::*nImpropers_function_type)( int ) const;
            nImpropers_function_type nImpropers_function_value( &::SireIO::CharmmPSF::nImpropers );
            
            CharmmPSF_exposer.def( 
                "nImpropers"
                , nImpropers_function_value
                , ( bp::arg("i") )
                , bp::release_gil_policy()
                , "Return the number of impropers in molecule i." );
        
        }
        { //::SireIO::CharmmPSF::nMolecules
        
            typedef int ( ::SireIO::CharmmPSF::*nMolecules_function_type)(  ) const;
            nMolecules_function_type nMolecules_function_value( &::SireIO::CharmmPSF::nMolecules );
            
            CharmmPSF_exposer.def( 
                "nMolecules"
                , nMolecules_function_value
                , bp::release_gil_policy()
                , "Return the number of molecules." );
        
        }
        { //::SireIO::CharmmPSF::nNonBondedExclusions
        
            typedef int ( ::SireIO::CharmmPSF::*nNonBondedExclusions_function_type)(  ) const;
            nNonBondedExclusions_function_type nNonBondedExclusions_function_value( &::SireIO::CharmmPSF::nNonBondedExclusions );
            
            CharmmPSF_exposer.def( 
                "nNonBondedExclusions"
                , nNonBondedExclusions_function_value
                , bp::release_gil_policy()
                , "Return the number of non-bonded exclusion records." );
        
        }
        { //::SireIO::CharmmPSF::nNonBondedExclusions
        
            typedef int ( ::SireIO::CharmmPSF::*nNonBondedExclusions_function_type)( int ) const;
            nNonBondedExclusions_function_type nNonBondedExclusions_function_value( &::SireIO::CharmmPSF::nNonBondedExclusions );
            
            CharmmPSF_exposer.def( 
                "nNonBondedExclusions"
                , nNonBondedExclusions_function_value
                , ( bp::arg("i") )
                , bp::release_gil_policy()
                , "Return the number of non-bonded exclusions in molecule i." );
        
        }
        CharmmPSF_exposer.def( bp::self != bp::self );
        { //::SireIO::CharmmPSF::operator=
        
            typedef ::SireIO::CharmmPSF & ( ::SireIO::CharmmPSF::*assign_function_type)( ::SireIO::CharmmPSF const & ) ;
            assign_function_type assign_function_value( &::SireIO::CharmmPSF::operator= );
            
            CharmmPSF_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        CharmmPSF_exposer.def( bp::self == bp::self );
        { //::SireIO::CharmmPSF::toLines
        
            typedef ::QVector< QString > ( ::SireIO::CharmmPSF::*toLines_function_type)(  ) const;
            toLines_function_type toLines_function_value( &::SireIO::CharmmPSF::toLines );
            
            CharmmPSF_exposer.def( 
                "toLines"
                , toLines_function_value
                , bp::release_gil_policy()
                , "Convert the parsed data to a collection of PSF record lines." );
        
        }
        { //::SireIO::CharmmPSF::toString
        
            typedef ::QString ( ::SireIO::CharmmPSF::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireIO::CharmmPSF::toString );
            
            CharmmPSF_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "Return a string representation of this parser" );
        
        }
        { //::SireIO::CharmmPSF::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireIO::CharmmPSF::typeName );
            
            CharmmPSF_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "Return the C++ name for this class" );
        
        }
        { //::SireIO::CharmmPSF::what
        
            typedef char const * ( ::SireIO::CharmmPSF::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireIO::CharmmPSF::what );
            
            CharmmPSF_exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "Return the C++ name for this class" );
        
        }
        CharmmPSF_exposer.staticmethod( "typeName" );
        CharmmPSF_exposer.def( "__copy__", &__copy__);
        CharmmPSF_exposer.def( "__deepcopy__", &__copy__);
        CharmmPSF_exposer.def( "clone", &__copy__);
        CharmmPSF_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireIO::CharmmPSF >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CharmmPSF_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireIO::CharmmPSF >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CharmmPSF_exposer.def_pickle(sire_pickle_suite< ::SireIO::CharmmPSF >());
        CharmmPSF_exposer.def( "__str__", &__str__< ::SireIO::CharmmPSF > );
        CharmmPSF_exposer.def( "__repr__", &__str__< ::SireIO::CharmmPSF > );
    }

}
