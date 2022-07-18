// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "InterFF.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/booleanproperty.h"

#include "SireBase/errors.h"

#include "SireBase/lengthproperty.h"

#include "SireBase/refcountdata.h"

#include "SireError/errors.h"

#include "SireMol/atomselection.h"

#include "SireMol/molecule.h"

#include "SireMol/molecules.h"

#include "SireMol/molresid.h"

#include "SireMol/partialmolecule.h"

#include "SireMol/residue.h"

#include "SireMol/selector.hpp"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "cljcalculator.h"

#include "cljshiftfunction.h"

#include "interff.h"

#include <QDebug>

#include <QElapsedTimer>

#include <QRegExp>

#include "interff.h"

SireMM::InterFF __copy__(const SireMM::InterFF &other){ return SireMM::InterFF(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

#include "Helpers/len.hpp"

void register_InterFF_class(){

    { //::SireMM::InterFF
        typedef bp::class_< SireMM::InterFF, bp::bases< SireFF::G1FF, SireFF::FF, SireMol::MolGroupsBase, SireBase::Property > > InterFF_exposer_t;
        InterFF_exposer_t InterFF_exposer = InterFF_exposer_t( "InterFF", "This is a forcefield that calculates the intermolecular coulomb\nand Lennard Jones (LJ) energy of all contained molecule views.\nIt also calculates the interactions with any fixed atoms added\nto this forcefield\n\nAuthor: Christopher Woods\n", bp::init< >("Constructor") );
        bp::scope InterFF_scope( InterFF_exposer );
        InterFF_exposer.def( bp::init< QString const & >(( bp::arg("name") ), "Construct, specifying the name of the forcefield") );
        InterFF_exposer.def( bp::init< SireMM::InterFF const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMM::InterFF::accept
        
            typedef void ( ::SireMM::InterFF::*accept_function_type)(  ) ;
            accept_function_type accept_function_value( &::SireMM::InterFF::accept );
            
            InterFF_exposer.def( 
                "accept"
                , accept_function_value
                , bp::release_gil_policy()
                , "Tell the forcefield that the last move was accepted. This tells the\nforcefield to make permanent any temporary changes that were used a workspace\nto avoid memory allocation during a move" );
        
        }
        { //::SireMM::InterFF::addFixedAtoms
        
            typedef void ( ::SireMM::InterFF::*addFixedAtoms_function_type)( ::SireMol::MoleculeView const &,::SireBase::PropertyMap const & ) ;
            addFixedAtoms_function_type addFixedAtoms_function_value( &::SireMM::InterFF::addFixedAtoms );
            
            InterFF_exposer.def( 
                "addFixedAtoms"
                , addFixedAtoms_function_value
                , ( bp::arg("molecule"), bp::arg("map")=SireBase::PropertyMap() )
                , "Add the passed atoms as fixed atoms to the forcefield" );
        
        }
        { //::SireMM::InterFF::addFixedAtoms
        
            typedef void ( ::SireMM::InterFF::*addFixedAtoms_function_type)( ::SireMol::Molecules const &,::SireBase::PropertyMap const & ) ;
            addFixedAtoms_function_type addFixedAtoms_function_value( &::SireMM::InterFF::addFixedAtoms );
            
            InterFF_exposer.def( 
                "addFixedAtoms"
                , addFixedAtoms_function_value
                , ( bp::arg("molecules"), bp::arg("map")=SireBase::PropertyMap() )
                , "Add the passed molecules as fixed atoms to the forcefield" );
        
        }
        { //::SireMM::InterFF::addFixedAtoms
        
            typedef void ( ::SireMM::InterFF::*addFixedAtoms_function_type)( ::SireMM::CLJAtoms const & ) ;
            addFixedAtoms_function_type addFixedAtoms_function_value( &::SireMM::InterFF::addFixedAtoms );
            
            InterFF_exposer.def( 
                "addFixedAtoms"
                , addFixedAtoms_function_value
                , ( bp::arg("atoms") )
                , bp::release_gil_policy()
                , "Add the passed atoms as fixed atoms to the forcefield" );
        
        }
        { //::SireMM::InterFF::cljFunction
        
            typedef ::SireMM::CLJFunction const & ( ::SireMM::InterFF::*cljFunction_function_type)(  ) const;
            cljFunction_function_type cljFunction_function_value( &::SireMM::InterFF::cljFunction );
            
            InterFF_exposer.def( 
                "cljFunction"
                , cljFunction_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return the function used to calculate the energy" );
        
        }
        { //::SireMM::InterFF::cljFunction
        
            typedef ::SireMM::CLJFunction const & ( ::SireMM::InterFF::*cljFunction_function_type)( ::QString ) const;
            cljFunction_function_type cljFunction_function_value( &::SireMM::InterFF::cljFunction );
            
            InterFF_exposer.def( 
                "cljFunction"
                , cljFunction_function_value
                , ( bp::arg("key") )
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return the CLJFunction associated with the passed key" );
        
        }
        { //::SireMM::InterFF::cljFunctionKeys
        
            typedef ::QStringList ( ::SireMM::InterFF::*cljFunctionKeys_function_type)(  ) const;
            cljFunctionKeys_function_type cljFunctionKeys_function_value( &::SireMM::InterFF::cljFunctionKeys );
            
            InterFF_exposer.def( 
                "cljFunctionKeys"
                , cljFunctionKeys_function_value
                , bp::release_gil_policy()
                , "Return the keys of all CLJFunctions added to this forcefield" );
        
        }
        { //::SireMM::InterFF::cljFunctions
        
            typedef ::QHash< QString, SireBase::PropPtr< SireMM::CLJFunction > > ( ::SireMM::InterFF::*cljFunctions_function_type)(  ) const;
            cljFunctions_function_type cljFunctions_function_value( &::SireMM::InterFF::cljFunctions );
            
            InterFF_exposer.def( 
                "cljFunctions"
                , cljFunctions_function_value
                , bp::release_gil_policy()
                , "Return the hash of all CLJFunctions in this forcefield, indexed by their key" );
        
        }
        { //::SireMM::InterFF::components
        
            typedef ::SireMM::MultiCLJComponent const & ( ::SireMM::InterFF::*components_function_type)(  ) const;
            components_function_type components_function_value( &::SireMM::InterFF::components );
            
            InterFF_exposer.def( 
                "components"
                , components_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return the energy components of this forcefield" );
        
        }
        { //::SireMM::InterFF::containsProperty
        
            typedef bool ( ::SireMM::InterFF::*containsProperty_function_type)( ::QString const & ) const;
            containsProperty_function_type containsProperty_function_value( &::SireMM::InterFF::containsProperty );
            
            InterFF_exposer.def( 
                "containsProperty"
                , containsProperty_function_value
                , ( bp::arg("name") )
                , bp::release_gil_policy()
                , "Return whether or not this forcefield contains the property property" );
        
        }
        { //::SireMM::InterFF::disableGrid
        
            typedef void ( ::SireMM::InterFF::*disableGrid_function_type)(  ) ;
            disableGrid_function_type disableGrid_function_value( &::SireMM::InterFF::disableGrid );
            
            InterFF_exposer.def( 
                "disableGrid"
                , disableGrid_function_value
                , bp::release_gil_policy()
                , "Turn off use of the grid" );
        
        }
        { //::SireMM::InterFF::disableParallelCalculation
        
            typedef void ( ::SireMM::InterFF::*disableParallelCalculation_function_type)(  ) ;
            disableParallelCalculation_function_type disableParallelCalculation_function_value( &::SireMM::InterFF::disableParallelCalculation );
            
            InterFF_exposer.def( 
                "disableParallelCalculation"
                , disableParallelCalculation_function_value
                , bp::release_gil_policy()
                , "Turn off use of a multicore parallel calculation of the energy.\nThis may be quicker if you have few atoms in the forcefield,\nor if you are only planning on allocating one core per forcefield" );
        
        }
        { //::SireMM::InterFF::disableReproducibleCalculation
        
            typedef void ( ::SireMM::InterFF::*disableReproducibleCalculation_function_type)(  ) ;
            disableReproducibleCalculation_function_type disableReproducibleCalculation_function_value( &::SireMM::InterFF::disableReproducibleCalculation );
            
            InterFF_exposer.def( 
                "disableReproducibleCalculation"
                , disableReproducibleCalculation_function_value
                , bp::release_gil_policy()
                , "Turn off an energy summing algorithm that guarantees the same energy\nregardless of whether a single core or multicore calculation is being\nperformed (i.e. rounding errors in both cases will not be identical)" );
        
        }
        { //::SireMM::InterFF::enableGrid
        
            typedef void ( ::SireMM::InterFF::*enableGrid_function_type)(  ) ;
            enableGrid_function_type enableGrid_function_value( &::SireMM::InterFF::enableGrid );
            
            InterFF_exposer.def( 
                "enableGrid"
                , enableGrid_function_value
                , bp::release_gil_policy()
                , "Turn on the use of the grid" );
        
        }
        { //::SireMM::InterFF::enableParallelCalculation
        
            typedef void ( ::SireMM::InterFF::*enableParallelCalculation_function_type)(  ) ;
            enableParallelCalculation_function_type enableParallelCalculation_function_value( &::SireMM::InterFF::enableParallelCalculation );
            
            InterFF_exposer.def( 
                "enableParallelCalculation"
                , enableParallelCalculation_function_value
                , bp::release_gil_policy()
                , "Turn on use of a multicore parallel calculation of the energy.\nThis is on by default, and spreads the energy calculations over\navailable cores" );
        
        }
        { //::SireMM::InterFF::enableReproducibleCalculation
        
            typedef void ( ::SireMM::InterFF::*enableReproducibleCalculation_function_type)(  ) ;
            enableReproducibleCalculation_function_type enableReproducibleCalculation_function_value( &::SireMM::InterFF::enableReproducibleCalculation );
            
            InterFF_exposer.def( 
                "enableReproducibleCalculation"
                , enableReproducibleCalculation_function_value
                , bp::release_gil_policy()
                , "Turn on an energy summing algorithm that guarantees the same energy\nregardless of whether a single core or multicore calculation is being\nperformed (i.e. rounding errors in both cases will be identical)" );
        
        }
        { //::SireMM::InterFF::fixedOnly
        
            typedef bool ( ::SireMM::InterFF::*fixedOnly_function_type)(  ) const;
            fixedOnly_function_type fixedOnly_function_value( &::SireMM::InterFF::fixedOnly );
            
            InterFF_exposer.def( 
                "fixedOnly"
                , fixedOnly_function_value
                , bp::release_gil_policy()
                , "Return whether or not only the energy between the mobile and fixed\natoms is being calculated" );
        
        }
        { //::SireMM::InterFF::grid
        
            typedef ::SireVol::GridInfo ( ::SireMM::InterFF::*grid_function_type)(  ) const;
            grid_function_type grid_function_value( &::SireMM::InterFF::grid );
            
            InterFF_exposer.def( 
                "grid"
                , grid_function_value
                , bp::release_gil_policy()
                , "Return the grid used to calculate the energy with fixed atoms. This will\nonly be set after the first energy calculation that uses the grid" );
        
        }
        { //::SireMM::InterFF::gridBuffer
        
            typedef ::SireUnits::Dimension::Length ( ::SireMM::InterFF::*gridBuffer_function_type)(  ) const;
            gridBuffer_function_type gridBuffer_function_value( &::SireMM::InterFF::gridBuffer );
            
            InterFF_exposer.def( 
                "gridBuffer"
                , gridBuffer_function_value
                , bp::release_gil_policy()
                , "Return the buffer used when working out the dimension of the grid" );
        
        }
        { //::SireMM::InterFF::gridSpacing
        
            typedef ::SireUnits::Dimension::Length ( ::SireMM::InterFF::*gridSpacing_function_type)(  ) const;
            gridSpacing_function_type gridSpacing_function_value( &::SireMM::InterFF::gridSpacing );
            
            InterFF_exposer.def( 
                "gridSpacing"
                , gridSpacing_function_value
                , bp::release_gil_policy()
                , "Return spacing between grid points" );
        
        }
        { //::SireMM::InterFF::mustNowRecalculateFromScratch
        
            typedef void ( ::SireMM::InterFF::*mustNowRecalculateFromScratch_function_type)(  ) ;
            mustNowRecalculateFromScratch_function_type mustNowRecalculateFromScratch_function_value( &::SireMM::InterFF::mustNowRecalculateFromScratch );
            
            InterFF_exposer.def( 
                "mustNowRecalculateFromScratch"
                , mustNowRecalculateFromScratch_function_value
                , bp::release_gil_policy()
                , "Signal that this forcefield must now be recalculated from scratch" );
        
        }
        { //::SireMM::InterFF::nCLJFunctions
        
            typedef int ( ::SireMM::InterFF::*nCLJFunctions_function_type)(  ) const;
            nCLJFunctions_function_type nCLJFunctions_function_value( &::SireMM::InterFF::nCLJFunctions );
            
            InterFF_exposer.def( 
                "nCLJFunctions"
                , nCLJFunctions_function_value
                , bp::release_gil_policy()
                , "Return the number of CLJ functions in this forcefield. There should always\nbe at least one" );
        
        }
        { //::SireMM::InterFF::needsAccepting
        
            typedef bool ( ::SireMM::InterFF::*needsAccepting_function_type)(  ) const;
            needsAccepting_function_type needsAccepting_function_value( &::SireMM::InterFF::needsAccepting );
            
            InterFF_exposer.def( 
                "needsAccepting"
                , needsAccepting_function_value
                , bp::release_gil_policy()
                , "Return whether or not this forcefield is using a temporary workspace that\nneeds to be accepted" );
        
        }
        InterFF_exposer.def( bp::self != bp::self );
        { //::SireMM::InterFF::operator=
        
            typedef ::SireMM::InterFF & ( ::SireMM::InterFF::*assign_function_type)( ::SireMM::InterFF const & ) ;
            assign_function_type assign_function_value( &::SireMM::InterFF::operator= );
            
            InterFF_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        InterFF_exposer.def( bp::self == bp::self );
        { //::SireMM::InterFF::properties
        
            typedef ::SireBase::Properties const & ( ::SireMM::InterFF::*properties_function_type)(  ) const;
            properties_function_type properties_function_value( &::SireMM::InterFF::properties );
            
            InterFF_exposer.def( 
                "properties"
                , properties_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return all of the properties of this function" );
        
        }
        { //::SireMM::InterFF::property
        
            typedef ::SireBase::Property const & ( ::SireMM::InterFF::*property_function_type)( ::QString const & ) const;
            property_function_type property_function_value( &::SireMM::InterFF::property );
            
            InterFF_exposer.def( 
                "property"
                , property_function_value
                , ( bp::arg("name") )
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return the value of the forcefield property with name name" );
        
        }
        { //::SireMM::InterFF::removeAllCLJFunctions
        
            typedef void ( ::SireMM::InterFF::*removeAllCLJFunctions_function_type)(  ) ;
            removeAllCLJFunctions_function_type removeAllCLJFunctions_function_value( &::SireMM::InterFF::removeAllCLJFunctions );
            
            InterFF_exposer.def( 
                "removeAllCLJFunctions"
                , removeAllCLJFunctions_function_value
                , bp::release_gil_policy()
                , "Function to remove all of the CLJFunctions (except for the default function)" );
        
        }
        { //::SireMM::InterFF::removeCLJFunctionAt
        
            typedef void ( ::SireMM::InterFF::*removeCLJFunctionAt_function_type)( ::QString ) ;
            removeCLJFunctionAt_function_type removeCLJFunctionAt_function_value( &::SireMM::InterFF::removeCLJFunctionAt );
            
            InterFF_exposer.def( 
                "removeCLJFunctionAt"
                , removeCLJFunctionAt_function_value
                , ( bp::arg("key") )
                , bp::release_gil_policy()
                , "Remove the CLJ function with key key - note that you cannot remove\nthe default CLJ function" );
        
        }
        { //::SireMM::InterFF::setCLJFunction
        
            typedef void ( ::SireMM::InterFF::*setCLJFunction_function_type)( ::SireMM::CLJFunction const & ) ;
            setCLJFunction_function_type setCLJFunction_function_value( &::SireMM::InterFF::setCLJFunction );
            
            InterFF_exposer.def( 
                "setCLJFunction"
                , setCLJFunction_function_value
                , ( bp::arg("cljfunc") )
                , bp::release_gil_policy()
                , "Function used to set the CLJFunction used to calculate the energy" );
        
        }
        { //::SireMM::InterFF::setCLJFunction
        
            typedef void ( ::SireMM::InterFF::*setCLJFunction_function_type)( ::QString,::SireMM::CLJFunction const & ) ;
            setCLJFunction_function_type setCLJFunction_function_value( &::SireMM::InterFF::setCLJFunction );
            
            InterFF_exposer.def( 
                "setCLJFunction"
                , setCLJFunction_function_value
                , ( bp::arg("key"), bp::arg("cljfunc") )
                , bp::release_gil_policy()
                , "Set the CLJFunction with key key equal to cljfunc" );
        
        }
        { //::SireMM::InterFF::setFixedAtoms
        
            typedef void ( ::SireMM::InterFF::*setFixedAtoms_function_type)( ::SireMol::MoleculeView const &,::SireBase::PropertyMap const & ) ;
            setFixedAtoms_function_type setFixedAtoms_function_value( &::SireMM::InterFF::setFixedAtoms );
            
            InterFF_exposer.def( 
                "setFixedAtoms"
                , setFixedAtoms_function_value
                , ( bp::arg("molecule"), bp::arg("map")=SireBase::PropertyMap() )
                , "Set the fixed atoms equal to molecule" );
        
        }
        { //::SireMM::InterFF::setFixedAtoms
        
            typedef void ( ::SireMM::InterFF::*setFixedAtoms_function_type)( ::SireMol::Molecules const &,::SireBase::PropertyMap const & ) ;
            setFixedAtoms_function_type setFixedAtoms_function_value( &::SireMM::InterFF::setFixedAtoms );
            
            InterFF_exposer.def( 
                "setFixedAtoms"
                , setFixedAtoms_function_value
                , ( bp::arg("molecules"), bp::arg("map")=SireBase::PropertyMap() )
                , "Set the fixed atoms equal to molecules" );
        
        }
        { //::SireMM::InterFF::setFixedAtoms
        
            typedef void ( ::SireMM::InterFF::*setFixedAtoms_function_type)( ::SireMM::CLJAtoms const & ) ;
            setFixedAtoms_function_type setFixedAtoms_function_value( &::SireMM::InterFF::setFixedAtoms );
            
            InterFF_exposer.def( 
                "setFixedAtoms"
                , setFixedAtoms_function_value
                , ( bp::arg("atoms") )
                , bp::release_gil_policy()
                , "Set the fixed atoms equal to atoms" );
        
        }
        { //::SireMM::InterFF::setFixedOnly
        
            typedef void ( ::SireMM::InterFF::*setFixedOnly_function_type)( bool ) ;
            setFixedOnly_function_type setFixedOnly_function_value( &::SireMM::InterFF::setFixedOnly );
            
            InterFF_exposer.def( 
                "setFixedOnly"
                , setFixedOnly_function_value
                , ( bp::arg("on") )
                , bp::release_gil_policy()
                , "Set whether or not the energy calculation is only between the mobile and\nfixed atoms (i.e. the mobile-mobile interaction is ignored)" );
        
        }
        { //::SireMM::InterFF::setGridBuffer
        
            typedef void ( ::SireMM::InterFF::*setGridBuffer_function_type)( ::SireUnits::Dimension::Length ) ;
            setGridBuffer_function_type setGridBuffer_function_value( &::SireMM::InterFF::setGridBuffer );
            
            InterFF_exposer.def( 
                "setGridBuffer"
                , setGridBuffer_function_value
                , ( bp::arg("buffer") )
                , bp::release_gil_policy()
                , "Set the buffer used when using a grid. This is the distance\nadded around the maximum extent of the atoms when working out the\ndimension of the grid" );
        
        }
        { //::SireMM::InterFF::setGridSpacing
        
            typedef void ( ::SireMM::InterFF::*setGridSpacing_function_type)( ::SireUnits::Dimension::Length ) ;
            setGridSpacing_function_type setGridSpacing_function_value( &::SireMM::InterFF::setGridSpacing );
            
            InterFF_exposer.def( 
                "setGridSpacing"
                , setGridSpacing_function_value
                , ( bp::arg("spacing") )
                , bp::release_gil_policy()
                , "Set the spacing between grid points" );
        
        }
        { //::SireMM::InterFF::setProperty
        
            typedef bool ( ::SireMM::InterFF::*setProperty_function_type)( ::QString const &,::SireBase::Property const & ) ;
            setProperty_function_type setProperty_function_value( &::SireMM::InterFF::setProperty );
            
            InterFF_exposer.def( 
                "setProperty"
                , setProperty_function_value
                , ( bp::arg("name"), bp::arg("property") )
                , bp::release_gil_policy()
                , "Set the forcefield property called name to the value property. Note that\nthis only affects the default CLJFunction. Additional functions must\nbe configured before adding them to the forcefield, or by using the\nsyntax property_name[cljfunction], e.g. ff.setProperty(space[fwds], Cartesian())\nwould set the space property of the CLJFunction at key fwds to Cartesian()" );
        
        }
        { //::SireMM::InterFF::setUseGrid
        
            typedef void ( ::SireMM::InterFF::*setUseGrid_function_type)( bool ) ;
            setUseGrid_function_type setUseGrid_function_value( &::SireMM::InterFF::setUseGrid );
            
            InterFF_exposer.def( 
                "setUseGrid"
                , setUseGrid_function_value
                , ( bp::arg("on") )
                , bp::release_gil_policy()
                , "Set whether or not a grid is used to optimise energy calculations with the fixed atoms" );
        
        }
        { //::SireMM::InterFF::setUseParallelCalculation
        
            typedef void ( ::SireMM::InterFF::*setUseParallelCalculation_function_type)( bool ) ;
            setUseParallelCalculation_function_type setUseParallelCalculation_function_value( &::SireMM::InterFF::setUseParallelCalculation );
            
            InterFF_exposer.def( 
                "setUseParallelCalculation"
                , setUseParallelCalculation_function_value
                , ( bp::arg("on") )
                , bp::release_gil_policy()
                , "Set whether or not to use a multicore parallel algorithm\nto calculate the energy" );
        
        }
        { //::SireMM::InterFF::setUseReproducibleCalculation
        
            typedef void ( ::SireMM::InterFF::*setUseReproducibleCalculation_function_type)( bool ) ;
            setUseReproducibleCalculation_function_type setUseReproducibleCalculation_function_value( &::SireMM::InterFF::setUseReproducibleCalculation );
            
            InterFF_exposer.def( 
                "setUseReproducibleCalculation"
                , setUseReproducibleCalculation_function_value
                , ( bp::arg("on") )
                , bp::release_gil_policy()
                , "Switch on or off use of an energy summing algorithm that guarantees the\nsame energy regardless of whether a single core or multicore calculation\nis being performed" );
        
        }
        { //::SireMM::InterFF::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::InterFF::typeName );
            
            InterFF_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::InterFF::usesGrid
        
            typedef bool ( ::SireMM::InterFF::*usesGrid_function_type)(  ) const;
            usesGrid_function_type usesGrid_function_value( &::SireMM::InterFF::usesGrid );
            
            InterFF_exposer.def( 
                "usesGrid"
                , usesGrid_function_value
                , bp::release_gil_policy()
                , "Return whether or not the grid is used" );
        
        }
        { //::SireMM::InterFF::usesParallelCalculation
        
            typedef bool ( ::SireMM::InterFF::*usesParallelCalculation_function_type)(  ) const;
            usesParallelCalculation_function_type usesParallelCalculation_function_value( &::SireMM::InterFF::usesParallelCalculation );
            
            InterFF_exposer.def( 
                "usesParallelCalculation"
                , usesParallelCalculation_function_value
                , bp::release_gil_policy()
                , "Return whether or not a parallel algorithm is used to calculate energies" );
        
        }
        { //::SireMM::InterFF::usesReproducibleCalculation
        
            typedef bool ( ::SireMM::InterFF::*usesReproducibleCalculation_function_type)(  ) const;
            usesReproducibleCalculation_function_type usesReproducibleCalculation_function_value( &::SireMM::InterFF::usesReproducibleCalculation );
            
            InterFF_exposer.def( 
                "usesReproducibleCalculation"
                , usesReproducibleCalculation_function_value
                , bp::release_gil_policy()
                , "Return whether or not a reproducible energy summing algorithm is being\nused to accumulate the energies" );
        
        }
        { //::SireMM::InterFF::what
        
            typedef char const * ( ::SireMM::InterFF::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMM::InterFF::what );
            
            InterFF_exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        InterFF_exposer.staticmethod( "typeName" );
        InterFF_exposer.def( "__copy__", &__copy__);
        InterFF_exposer.def( "__deepcopy__", &__copy__);
        InterFF_exposer.def( "clone", &__copy__);
        InterFF_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::InterFF >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        InterFF_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::InterFF >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        InterFF_exposer.def_pickle(sire_pickle_suite< ::SireMM::InterFF >());
        InterFF_exposer.def( "__str__", &__str__< ::SireMM::InterFF > );
        InterFF_exposer.def( "__repr__", &__str__< ::SireMM::InterFF > );
        InterFF_exposer.def( "__len__", &__len_count< ::SireMM::InterFF > );
    }

}
