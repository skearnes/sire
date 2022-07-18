// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "AtomForces.pypp.hpp"

namespace bp = boost::python;

#include "atomforces.h"

#include "atomforces.h"

#include "SireMaths/vector.h"

#include "SireMol/moleculeview.h"

SireMol::AtomProperty<SireMaths::Vector3D<SireUnits::Dimension::Force> > __copy__(const SireMol::AtomProperty<SireMaths::Vector3D<SireUnits::Dimension::Force> > &other){ return SireMol::AtomProperty<SireMaths::Vector3D<SireUnits::Dimension::Force> >(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

#include "Helpers/len.hpp"

void register_AtomForces_class(){

    { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >
        typedef bp::class_< SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >, bp::bases< SireMol::AtomProp, SireMol::MolViewProperty, SireBase::Property > > AtomForces_exposer_t;
        AtomForces_exposer_t AtomForces_exposer = AtomForces_exposer_t( "AtomForces", "", bp::init< >("") );
        bp::scope AtomForces_scope( AtomForces_exposer );
        AtomForces_exposer.def( bp::init< SireMol::MoleculeInfo const & >(( bp::arg("molinfo") ), "") );
        AtomForces_exposer.def( bp::init< SireMol::MoleculeInfo const &, SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 1, 1, -2, 0, 0, 0, 0 > > const & >(( bp::arg("molinfo"), bp::arg("default_value") ), "") );
        AtomForces_exposer.def( bp::init< SireMol::MoleculeView const & >(( bp::arg("molview") ), "") );
        AtomForces_exposer.def( bp::init< SireMol::MoleculeView const &, SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 1, 1, -2, 0, 0, 0, 0 > > const & >(( bp::arg("molview"), bp::arg("default_value") ), "") );
        AtomForces_exposer.def( bp::init< SireMol::MoleculeInfoData const & >(( bp::arg("molinfo") ), "") );
        AtomForces_exposer.def( bp::init< SireMol::MoleculeInfoData const &, SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 1, 1, -2, 0, 0, 0, 0 > > const & >(( bp::arg("molinfo"), bp::arg("default_value") ), "") );
        AtomForces_exposer.def( bp::init< SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 1, 1, -2, 0, 0, 0, 0 > > const & >(( bp::arg("value") ), "") );
        AtomForces_exposer.def( bp::init< SireBase::PackedArray2D< SireMaths::Vector3D< SireUnits::Dimension::Force > > const & >(( bp::arg("values") ), "") );
        AtomForces_exposer.def( bp::init< SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > const & >(( bp::arg("other") ), "") );
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::array
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > exported_class_t;
            typedef ::SireBase::PackedArray2D< SireMaths::Vector3D< SireUnits::Dimension::Force > > const & ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::*array_function_type)(  ) const;
            array_function_type array_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::array );
            
            AtomForces_exposer.def( 
                "array"
                , array_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::assertCanConvert
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::*assertCanConvert_function_type)( ::QVariant const & ) const;
            assertCanConvert_function_type assertCanConvert_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::assertCanConvert );
            
            AtomForces_exposer.def( 
                "assertCanConvert"
                , assertCanConvert_function_value
                , ( bp::arg("value") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::assignFrom
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::*assignFrom_function_type)( ::SireMol::AtomProperty< QVariant > const & ) ;
            assignFrom_function_type assignFrom_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::assignFrom );
            
            AtomForces_exposer.def( 
                "assignFrom"
                , assignFrom_function_value
                , ( bp::arg("values") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::at
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > exported_class_t;
            typedef ::SireBase::PackedArray2D< SireMaths::Vector3D< SireUnits::Dimension::Force > >::Array const & ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::*at_function_type)( ::SireMol::CGIdx ) const;
            at_function_type at_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::at );
            
            AtomForces_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("cgidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::at
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > exported_class_t;
            typedef ::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 1, 1, -2, 0, 0, 0, 0 > > const & ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::*at_function_type)( ::SireMol::CGAtomIdx const & ) const;
            at_function_type at_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::at );
            
            AtomForces_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("cgatomidx") )
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::canConvert
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > exported_class_t;
            typedef bool ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::*canConvert_function_type)( ::QVariant const & ) const;
            canConvert_function_type canConvert_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::canConvert );
            
            AtomForces_exposer.def( 
                "canConvert"
                , canConvert_function_value
                , ( bp::arg("value") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::copyFrom
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::*copyFrom_function_type)( ::QVector< SireMaths::Vector3D< SireUnits::Dimension::Force > > const & ) ;
            copyFrom_function_type copyFrom_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::copyFrom );
            
            AtomForces_exposer.def( 
                "copyFrom"
                , copyFrom_function_value
                , ( bp::arg("values") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::copyFrom
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::*copyFrom_function_type)( ::QVector< SireMaths::Vector3D< SireUnits::Dimension::Force > > const &,::SireMol::AtomSelection const & ) ;
            copyFrom_function_type copyFrom_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::copyFrom );
            
            AtomForces_exposer.def( 
                "copyFrom"
                , copyFrom_function_value
                , ( bp::arg("values"), bp::arg("selection") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::count
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::*count_function_type)(  ) const;
            count_function_type count_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::count );
            
            AtomForces_exposer.def( 
                "count"
                , count_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::divide
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > exported_class_t;
            typedef ::SireBase::PropertyPtr ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::*divide_function_type)( ::QVector< SireMol::AtomSelection > const & ) const;
            divide_function_type divide_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::divide );
            
            AtomForces_exposer.def( 
                "divide"
                , divide_function_value
                , ( bp::arg("beads") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::divideByResidue
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > exported_class_t;
            typedef ::SireBase::PropertyPtr ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::*divideByResidue_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            divideByResidue_function_type divideByResidue_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::divideByResidue );
            
            AtomForces_exposer.def( 
                "divideByResidue"
                , divideByResidue_function_value
                , ( bp::arg("molinfo") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::fromVariant
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > exported_class_t;
            typedef ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > ( *fromVariant_function_type )( ::SireMol::AtomProperty< QVariant > const & );
            fromVariant_function_type fromVariant_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::fromVariant );
            
            AtomForces_exposer.def( 
                "fromVariant"
                , fromVariant_function_value
                , ( bp::arg("variant") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::get
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > exported_class_t;
            typedef ::SireBase::PackedArray2D< SireMaths::Vector3D< SireUnits::Dimension::Force > >::Array const & ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::*get_function_type)( ::SireMol::CGIdx ) const;
            get_function_type get_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::get );
            
            AtomForces_exposer.def( 
                "get"
                , get_function_value
                , ( bp::arg("cgidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::get
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > exported_class_t;
            typedef ::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 1, 1, -2, 0, 0, 0, 0 > > const & ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::*get_function_type)( ::SireMol::CGAtomIdx const & ) const;
            get_function_type get_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::get );
            
            AtomForces_exposer.def( 
                "get"
                , get_function_value
                , ( bp::arg("cgatomidx") )
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::getAsProperty
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > exported_class_t;
            typedef ::SireBase::PropertyPtr ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::*getAsProperty_function_type)( ::SireMol::CGAtomIdx const & ) const;
            getAsProperty_function_type getAsProperty_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::getAsProperty );
            
            AtomForces_exposer.def( 
                "getAsProperty"
                , getAsProperty_function_value
                , ( bp::arg("cgatomidx") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::getAsVariant
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > exported_class_t;
            typedef ::QVariant ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::*getAsVariant_function_type)( ::SireMol::CGAtomIdx const & ) const;
            getAsVariant_function_type getAsVariant_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::getAsVariant );
            
            AtomForces_exposer.def( 
                "getAsVariant"
                , getAsVariant_function_value
                , ( bp::arg("cgatomidx") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::isCompatibleWith
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > exported_class_t;
            typedef bool ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::*isCompatibleWith_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            isCompatibleWith_function_type isCompatibleWith_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::isCompatibleWith );
            
            AtomForces_exposer.def( 
                "isCompatibleWith"
                , isCompatibleWith_function_value
                , ( bp::arg("molinfo") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::isCompatibleWith
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > exported_class_t;
            typedef bool ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::*isCompatibleWith_function_type)( ::SireMol::MoleculeInfo const & ) const;
            isCompatibleWith_function_type isCompatibleWith_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::isCompatibleWith );
            
            AtomForces_exposer.def( 
                "isCompatibleWith"
                , isCompatibleWith_function_value
                , ( bp::arg("molinfo") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::isEmpty
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > exported_class_t;
            typedef bool ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::isEmpty );
            
            AtomForces_exposer.def( 
                "isEmpty"
                , isEmpty_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::matchToSelection
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > exported_class_t;
            typedef ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::*matchToSelection_function_type)( ::SireMol::AtomSelection const & ) const;
            matchToSelection_function_type matchToSelection_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::matchToSelection );
            
            AtomForces_exposer.def( 
                "matchToSelection"
                , matchToSelection_function_value
                , ( bp::arg("selection") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::merge
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > exported_class_t;
            typedef ::SireBase::PropertyPtr ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::*merge_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            merge_function_type merge_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::merge );
            
            AtomForces_exposer.def( 
                "merge"
                , merge_function_value
                , ( bp::arg("molinfo") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::nAtoms
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::*nAtoms_function_type)(  ) const;
            nAtoms_function_type nAtoms_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::nAtoms );
            
            AtomForces_exposer.def( 
                "nAtoms"
                , nAtoms_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::nAtoms
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::*nAtoms_function_type)( ::SireMol::CGIdx ) const;
            nAtoms_function_type nAtoms_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::nAtoms );
            
            AtomForces_exposer.def( 
                "nAtoms"
                , nAtoms_function_value
                , ( bp::arg("cgidx") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::nCutGroups
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::*nCutGroups_function_type)(  ) const;
            nCutGroups_function_type nCutGroups_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::nCutGroups );
            
            AtomForces_exposer.def( 
                "nCutGroups"
                , nCutGroups_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        AtomForces_exposer.def( bp::self != bp::self );
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::operator=
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > exported_class_t;
            typedef ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > & ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::*assign_function_type)( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > const & ) ;
            assign_function_type assign_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::operator= );
            
            AtomForces_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        AtomForces_exposer.def( bp::self == bp::self );
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::operator[]
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > exported_class_t;
            typedef ::SireBase::PackedArray2D< SireMaths::Vector3D< SireUnits::Dimension::Force > >::Array const & ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::*__getitem___function_type)( ::SireMol::CGIdx ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::operator[] );
            
            AtomForces_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("cgidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::operator[]
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > exported_class_t;
            typedef ::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 1, 1, -2, 0, 0, 0, 0 > > const & ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::*__getitem___function_type)( ::SireMol::CGAtomIdx const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::operator[] );
            
            AtomForces_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("cgatomidx") )
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::set
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > exported_class_t;
            typedef ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > & ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::*set_function_type)( ::SireMol::CGAtomIdx const &,::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 1, 1, -2, 0, 0, 0, 0 > > const & ) ;
            set_function_type set_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::set );
            
            AtomForces_exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("cgatomidx"), bp::arg("value") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::set
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > exported_class_t;
            typedef ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > & ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::*set_function_type)( ::SireMol::CGIdx,::QVector< SireMaths::Vector3D< SireUnits::Dimension::Force > > const & ) ;
            set_function_type set_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::set );
            
            AtomForces_exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("cgidx"), bp::arg("values") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::size
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::*size_function_type)(  ) const;
            size_function_type size_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::size );
            
            AtomForces_exposer.def( 
                "size"
                , size_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::toString
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > exported_class_t;
            typedef ::QString ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::toString );
            
            AtomForces_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::toVariant
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > exported_class_t;
            typedef ::SireMol::AtomProperty< QVariant > ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::*toVariant_function_type)(  ) const;
            toVariant_function_type toVariant_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::toVariant );
            
            AtomForces_exposer.def( 
                "toVariant"
                , toVariant_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::toVector
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > exported_class_t;
            typedef ::QVector< SireMaths::Vector3D< SireUnits::Dimension::Force > > ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::*toVector_function_type)(  ) const;
            toVector_function_type toVector_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::toVector );
            
            AtomForces_exposer.def( 
                "toVector"
                , toVector_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::toVector
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > exported_class_t;
            typedef ::QVector< SireMaths::Vector3D< SireUnits::Dimension::Force > > ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::*toVector_function_type)( ::SireMol::AtomSelection const & ) const;
            toVector_function_type toVector_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::toVector );
            
            AtomForces_exposer.def( 
                "toVector"
                , toVector_function_value
                , ( bp::arg("selection") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::typeName
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Force > >::typeName );
            
            AtomForces_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        AtomForces_exposer.staticmethod( "fromVariant" );
        AtomForces_exposer.staticmethod( "typeName" );
        AtomForces_exposer.def( "__copy__", &__copy__);
        AtomForces_exposer.def( "__deepcopy__", &__copy__);
        AtomForces_exposer.def( "clone", &__copy__);
        AtomForces_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::AtomProperty<SireMaths::Vector3D<SireUnits::Dimension::Force> > >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AtomForces_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::AtomProperty<SireMaths::Vector3D<SireUnits::Dimension::Force> > >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AtomForces_exposer.def_pickle(sire_pickle_suite< ::SireMol::AtomProperty<SireMaths::Vector3D<SireUnits::Dimension::Force> > >());
        AtomForces_exposer.def( "__str__", &__str__< ::SireMol::AtomProperty<SireMaths::Vector3D<SireUnits::Dimension::Force> > > );
        AtomForces_exposer.def( "__repr__", &__str__< ::SireMol::AtomProperty<SireMaths::Vector3D<SireUnits::Dimension::Force> > > );
        AtomForces_exposer.def( "__len__", &__len_size< ::SireMol::AtomProperty<SireMaths::Vector3D<SireUnits::Dimension::Force> > > );
    }

}
