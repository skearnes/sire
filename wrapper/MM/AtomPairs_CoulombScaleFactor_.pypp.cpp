// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "AtomPairs_CoulombScaleFactor_.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/parallel.h"

#include "SireMol/moleculeinfo.h"

#include "SireStream/datastream.h"

#include "cljnbpairs.h"

#include "cljnbpairs.h"

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_AtomPairs_CoulombScaleFactor__class(){

    { //::SireMM::AtomPairs< SireMM::CoulombScaleFactor >
        typedef bp::class_< SireMM::AtomPairs< SireMM::CoulombScaleFactor >, bp::bases< SireMol::MoleculeProperty, SireMol::MolViewProperty, SireBase::Property >, boost::noncopyable > AtomPairs_CoulombScaleFactor__exposer_t;
        AtomPairs_CoulombScaleFactor__exposer_t AtomPairs_CoulombScaleFactor__exposer = AtomPairs_CoulombScaleFactor__exposer_t( "AtomPairs_CoulombScaleFactor_", "", bp::no_init );
        bp::scope AtomPairs_CoulombScaleFactor__scope( AtomPairs_CoulombScaleFactor__exposer );
        { //::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::get
        
            typedef SireMM::AtomPairs< SireMM::CoulombScaleFactor > exported_class_t;
            typedef ::SireMM::CoulombScaleFactor const & ( ::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::*get_function_type)( ::SireMol::CGAtomIdx const & ) const;
            get_function_type get_function_value( &::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::get );
            
            AtomPairs_CoulombScaleFactor__exposer.def( 
                "get"
                , get_function_value
                , ( bp::arg("atm0") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::get
        
            typedef SireMM::AtomPairs< SireMM::CoulombScaleFactor > exported_class_t;
            typedef ::SireMM::CoulombScaleFactor const & ( ::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::*get_function_type)( ::SireMol::CGAtomIdx const &,::SireMol::CGAtomIdx const & ) const;
            get_function_type get_function_value( &::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::get );
            
            AtomPairs_CoulombScaleFactor__exposer.def( 
                "get"
                , get_function_value
                , ( bp::arg("atm0"), bp::arg("atm1") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::get
        
            typedef SireMM::AtomPairs< SireMM::CoulombScaleFactor > exported_class_t;
            typedef ::SireMM::CGAtomPairs< SireMM::CoulombScaleFactor > const & ( ::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::*get_function_type)( ::SireMol::CGIdx ) const;
            get_function_type get_function_value( &::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::get );
            
            AtomPairs_CoulombScaleFactor__exposer.def( 
                "get"
                , get_function_value
                , ( bp::arg("cgid0") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::get
        
            typedef SireMM::AtomPairs< SireMM::CoulombScaleFactor > exported_class_t;
            typedef ::SireMM::CGAtomPairs< SireMM::CoulombScaleFactor > const & ( ::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::*get_function_type)( ::SireMol::CGIdx,::SireMol::CGIdx ) const;
            get_function_type get_function_value( &::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::get );
            
            AtomPairs_CoulombScaleFactor__exposer.def( 
                "get"
                , get_function_value
                , ( bp::arg("cgid0"), bp::arg("cgid1") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::get
        
            typedef SireMM::AtomPairs< SireMM::CoulombScaleFactor > exported_class_t;
            typedef ::SireMM::CoulombScaleFactor const & ( ::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::*get_function_type)( ::SireMol::AtomID const & ) const;
            get_function_type get_function_value( &::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::get );
            
            AtomPairs_CoulombScaleFactor__exposer.def( 
                "get"
                , get_function_value
                , ( bp::arg("atm0") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::get
        
            typedef SireMM::AtomPairs< SireMM::CoulombScaleFactor > exported_class_t;
            typedef ::SireMM::CoulombScaleFactor const & ( ::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::*get_function_type)( ::SireMol::AtomID const &,::SireMol::AtomID const & ) const;
            get_function_type get_function_value( &::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::get );
            
            AtomPairs_CoulombScaleFactor__exposer.def( 
                "get"
                , get_function_value
                , ( bp::arg("atm0"), bp::arg("atm1") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::get
        
            typedef SireMM::AtomPairs< SireMM::CoulombScaleFactor > exported_class_t;
            typedef ::SireMM::CGAtomPairs< SireMM::CoulombScaleFactor > const & ( ::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::*get_function_type)( ::SireMol::CGID const & ) const;
            get_function_type get_function_value( &::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::get );
            
            AtomPairs_CoulombScaleFactor__exposer.def( 
                "get"
                , get_function_value
                , ( bp::arg("cgid0") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::get
        
            typedef SireMM::AtomPairs< SireMM::CoulombScaleFactor > exported_class_t;
            typedef ::SireMM::CGAtomPairs< SireMM::CoulombScaleFactor > const & ( ::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::*get_function_type)( ::SireMol::CGID const &,::SireMol::CGID const & ) const;
            get_function_type get_function_value( &::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::get );
            
            AtomPairs_CoulombScaleFactor__exposer.def( 
                "get"
                , get_function_value
                , ( bp::arg("cgid0"), bp::arg("cgid1") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::info
        
            typedef SireMM::AtomPairs< SireMM::CoulombScaleFactor > exported_class_t;
            typedef ::SireMol::MoleculeInfoData const & ( ::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::*info_function_type)(  ) const;
            info_function_type info_function_value( &::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::info );
            
            AtomPairs_CoulombScaleFactor__exposer.def( 
                "info"
                , info_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::isCompatibleWith
        
            typedef SireMM::AtomPairs< SireMM::CoulombScaleFactor > exported_class_t;
            typedef bool ( ::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::*isCompatibleWith_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            isCompatibleWith_function_type isCompatibleWith_function_value( &::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::isCompatibleWith );
            
            AtomPairs_CoulombScaleFactor__exposer.def( 
                "isCompatibleWith"
                , isCompatibleWith_function_value
                , ( bp::arg("molinfo") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::isEmpty
        
            typedef SireMM::AtomPairs< SireMM::CoulombScaleFactor > exported_class_t;
            typedef bool ( ::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::isEmpty );
            
            AtomPairs_CoulombScaleFactor__exposer.def( 
                "isEmpty"
                , isEmpty_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::nAtoms
        
            typedef SireMM::AtomPairs< SireMM::CoulombScaleFactor > exported_class_t;
            typedef int ( ::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::*nAtoms_function_type)(  ) const;
            nAtoms_function_type nAtoms_function_value( &::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::nAtoms );
            
            AtomPairs_CoulombScaleFactor__exposer.def( 
                "nAtoms"
                , nAtoms_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::nGroups
        
            typedef SireMM::AtomPairs< SireMM::CoulombScaleFactor > exported_class_t;
            typedef int ( ::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::*nGroups_function_type)(  ) const;
            nGroups_function_type nGroups_function_value( &::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::nGroups );
            
            AtomPairs_CoulombScaleFactor__exposer.def( 
                "nGroups"
                , nGroups_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        AtomPairs_CoulombScaleFactor__exposer.def( bp::self != bp::self );
        { //::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::operator()
        
            typedef SireMM::AtomPairs< SireMM::CoulombScaleFactor > exported_class_t;
            typedef ::SireMM::CoulombScaleFactor const & ( ::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::*__call___function_type)( ::SireMol::CGAtomIdx const & ) const;
            __call___function_type __call___function_value( &::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::operator() );
            
            AtomPairs_CoulombScaleFactor__exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("atm0") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::operator()
        
            typedef SireMM::AtomPairs< SireMM::CoulombScaleFactor > exported_class_t;
            typedef ::SireMM::CoulombScaleFactor const & ( ::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::*__call___function_type)( ::SireMol::CGAtomIdx const &,::SireMol::CGAtomIdx const & ) const;
            __call___function_type __call___function_value( &::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::operator() );
            
            AtomPairs_CoulombScaleFactor__exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("atm0"), bp::arg("atm1") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::operator()
        
            typedef SireMM::AtomPairs< SireMM::CoulombScaleFactor > exported_class_t;
            typedef ::SireMM::CGAtomPairs< SireMM::CoulombScaleFactor > const & ( ::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::*__call___function_type)( ::SireMol::CGIdx ) const;
            __call___function_type __call___function_value( &::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::operator() );
            
            AtomPairs_CoulombScaleFactor__exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("cgid0") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::operator()
        
            typedef SireMM::AtomPairs< SireMM::CoulombScaleFactor > exported_class_t;
            typedef ::SireMM::CGAtomPairs< SireMM::CoulombScaleFactor > const & ( ::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::*__call___function_type)( ::SireMol::CGIdx,::SireMol::CGIdx ) const;
            __call___function_type __call___function_value( &::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::operator() );
            
            AtomPairs_CoulombScaleFactor__exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("cgid0"), bp::arg("cgid1") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::operator()
        
            typedef SireMM::AtomPairs< SireMM::CoulombScaleFactor > exported_class_t;
            typedef ::SireMM::CoulombScaleFactor const & ( ::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::*__call___function_type)( ::SireMol::AtomID const & ) const;
            __call___function_type __call___function_value( &::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::operator() );
            
            AtomPairs_CoulombScaleFactor__exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("atm0") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::operator()
        
            typedef SireMM::AtomPairs< SireMM::CoulombScaleFactor > exported_class_t;
            typedef ::SireMM::CoulombScaleFactor const & ( ::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::*__call___function_type)( ::SireMol::AtomID const &,::SireMol::AtomID const & ) const;
            __call___function_type __call___function_value( &::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::operator() );
            
            AtomPairs_CoulombScaleFactor__exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("atm0"), bp::arg("atm1") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::operator()
        
            typedef SireMM::AtomPairs< SireMM::CoulombScaleFactor > exported_class_t;
            typedef ::SireMM::CGAtomPairs< SireMM::CoulombScaleFactor > const & ( ::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::*__call___function_type)( ::SireMol::CGID const & ) const;
            __call___function_type __call___function_value( &::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::operator() );
            
            AtomPairs_CoulombScaleFactor__exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("cgid0") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::operator()
        
            typedef SireMM::AtomPairs< SireMM::CoulombScaleFactor > exported_class_t;
            typedef ::SireMM::CGAtomPairs< SireMM::CoulombScaleFactor > const & ( ::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::*__call___function_type)( ::SireMol::CGID const &,::SireMol::CGID const & ) const;
            __call___function_type __call___function_value( &::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::operator() );
            
            AtomPairs_CoulombScaleFactor__exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("cgid0"), bp::arg("cgid1") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::operator=
        
            typedef SireMM::AtomPairs< SireMM::CoulombScaleFactor > exported_class_t;
            typedef ::SireMM::AtomPairs< SireMM::CoulombScaleFactor > & ( ::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::*assign_function_type)( ::SireMM::AtomPairs< SireMM::CoulombScaleFactor > const & ) ;
            assign_function_type assign_function_value( &::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::operator= );
            
            AtomPairs_CoulombScaleFactor__exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        AtomPairs_CoulombScaleFactor__exposer.def( bp::self == bp::self );
        { //::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::reserve
        
            typedef SireMM::AtomPairs< SireMM::CoulombScaleFactor > exported_class_t;
            typedef void ( ::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::*reserve_function_type)( int,int ) ;
            reserve_function_type reserve_function_value( &::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::reserve );
            
            AtomPairs_CoulombScaleFactor__exposer.def( 
                "reserve"
                , reserve_function_value
                , ( bp::arg("dim_x"), bp::arg("dim_y") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::set
        
            typedef SireMM::AtomPairs< SireMM::CoulombScaleFactor > exported_class_t;
            typedef void ( ::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::*set_function_type)( ::SireMol::CGAtomIdx const &,::SireMM::CoulombScaleFactor const & ) ;
            set_function_type set_function_value( &::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::set );
            
            AtomPairs_CoulombScaleFactor__exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("atm0"), bp::arg("value") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::set
        
            typedef SireMM::AtomPairs< SireMM::CoulombScaleFactor > exported_class_t;
            typedef void ( ::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::*set_function_type)( ::SireMol::CGAtomIdx const &,::SireMol::CGAtomIdx const &,::SireMM::CoulombScaleFactor const & ) ;
            set_function_type set_function_value( &::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::set );
            
            AtomPairs_CoulombScaleFactor__exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("atm0"), bp::arg("atm1"), bp::arg("value") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::set
        
            typedef SireMM::AtomPairs< SireMM::CoulombScaleFactor > exported_class_t;
            typedef void ( ::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::*set_function_type)( ::SireMol::AtomID const &,::SireMM::CoulombScaleFactor const & ) ;
            set_function_type set_function_value( &::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::set );
            
            AtomPairs_CoulombScaleFactor__exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("atm0"), bp::arg("value") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::set
        
            typedef SireMM::AtomPairs< SireMM::CoulombScaleFactor > exported_class_t;
            typedef void ( ::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::*set_function_type)( ::SireMol::AtomID const &,::SireMol::AtomID const &,::SireMM::CoulombScaleFactor const & ) ;
            set_function_type set_function_value( &::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::set );
            
            AtomPairs_CoulombScaleFactor__exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("atm0"), bp::arg("atm1"), bp::arg("value") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::setAll
        
            typedef SireMM::AtomPairs< SireMM::CoulombScaleFactor > exported_class_t;
            typedef void ( ::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::*setAll_function_type)( ::SireMM::CoulombScaleFactor const & ) ;
            setAll_function_type setAll_function_value( &::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::setAll );
            
            AtomPairs_CoulombScaleFactor__exposer.def( 
                "setAll"
                , setAll_function_value
                , ( bp::arg("value") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::setAll
        
            typedef SireMM::AtomPairs< SireMM::CoulombScaleFactor > exported_class_t;
            typedef void ( ::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::*setAll_function_type)( ::SireMol::CGIdx,::SireMM::CoulombScaleFactor const & ) ;
            setAll_function_type setAll_function_value( &::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::setAll );
            
            AtomPairs_CoulombScaleFactor__exposer.def( 
                "setAll"
                , setAll_function_value
                , ( bp::arg("cgid0"), bp::arg("value") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::setAll
        
            typedef SireMM::AtomPairs< SireMM::CoulombScaleFactor > exported_class_t;
            typedef void ( ::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::*setAll_function_type)( ::SireMol::CGIdx,::SireMol::CGIdx,::SireMM::CoulombScaleFactor const & ) ;
            setAll_function_type setAll_function_value( &::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::setAll );
            
            AtomPairs_CoulombScaleFactor__exposer.def( 
                "setAll"
                , setAll_function_value
                , ( bp::arg("cgid0"), bp::arg("cgid1"), bp::arg("value") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::setAll
        
            typedef SireMM::AtomPairs< SireMM::CoulombScaleFactor > exported_class_t;
            typedef void ( ::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::*setAll_function_type)( ::SireMol::CGID const &,::SireMM::CoulombScaleFactor const & ) ;
            setAll_function_type setAll_function_value( &::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::setAll );
            
            AtomPairs_CoulombScaleFactor__exposer.def( 
                "setAll"
                , setAll_function_value
                , ( bp::arg("cgid0"), bp::arg("value") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::setAll
        
            typedef SireMM::AtomPairs< SireMM::CoulombScaleFactor > exported_class_t;
            typedef void ( ::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::*setAll_function_type)( ::SireMol::CGID const &,::SireMol::CGID const &,::SireMM::CoulombScaleFactor const & ) ;
            setAll_function_type setAll_function_value( &::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::setAll );
            
            AtomPairs_CoulombScaleFactor__exposer.def( 
                "setAll"
                , setAll_function_value
                , ( bp::arg("cgid0"), bp::arg("cgid1"), bp::arg("value") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::squeeze
        
            typedef SireMM::AtomPairs< SireMM::CoulombScaleFactor > exported_class_t;
            typedef void ( ::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::*squeeze_function_type)(  ) ;
            squeeze_function_type squeeze_function_value( &::SireMM::AtomPairs< SireMM::CoulombScaleFactor >::squeeze );
            
            AtomPairs_CoulombScaleFactor__exposer.def( 
                "squeeze"
                , squeeze_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        AtomPairs_CoulombScaleFactor__exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::AtomPairs<SireMM::CoulombScaleFactor> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AtomPairs_CoulombScaleFactor__exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::AtomPairs<SireMM::CoulombScaleFactor> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AtomPairs_CoulombScaleFactor__exposer.def_pickle(sire_pickle_suite< ::SireMM::AtomPairs<SireMM::CoulombScaleFactor> >());
        AtomPairs_CoulombScaleFactor__exposer.def( "__str__", &__str__< ::SireMM::AtomPairs<SireMM::CoulombScaleFactor> > );
        AtomPairs_CoulombScaleFactor__exposer.def( "__repr__", &__str__< ::SireMM::AtomPairs<SireMM::CoulombScaleFactor> > );
    }

}
