// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "SegStringProperty.pypp.hpp"

namespace bp = boost::python;

#include "segproperty.hpp"

#include "segproperty.hpp"

#include "SireMaths/vector.h"

SireMol::SegProperty<QString> __copy__(const SireMol::SegProperty<QString> &other){ return SireMol::SegProperty<QString>(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/len.hpp"

void register_SegStringProperty_class(){

    { //::SireMol::SegProperty< QString >
        typedef bp::class_< SireMol::SegProperty< QString >, bp::bases< SireMol::SegProp, SireMol::MolViewProperty, SireBase::Property > > SegStringProperty_exposer_t;
        SegStringProperty_exposer_t SegStringProperty_exposer = SegStringProperty_exposer_t( "SegStringProperty", bp::init< >() );
        bp::scope SegStringProperty_scope( SegStringProperty_exposer );
        SegStringProperty_exposer.def( bp::init< SireMol::MoleculeInfoData const & >(( bp::arg("molinfo") )) );
        SegStringProperty_exposer.def( bp::init< QVector< QString > const & >(( bp::arg("values") )) );
        SegStringProperty_exposer.def( bp::init< SireMol::SegProperty< QString > const & >(( bp::arg("other") )) );
        { //::SireMol::SegProperty< QString >::array
        
            typedef SireMol::SegProperty< QString > exported_class_t;
            typedef ::QVector< QString > const & ( ::SireMol::SegProperty< QString >::*array_function_type)(  ) const;
            array_function_type array_function_value( &::SireMol::SegProperty< QString >::array );
            
            SegStringProperty_exposer.def( 
                "array"
                , array_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireMol::SegProperty< QString >::assertCanConvert
        
            typedef SireMol::SegProperty< QString > exported_class_t;
            typedef void ( ::SireMol::SegProperty< QString >::*assertCanConvert_function_type)( ::QVariant const & ) const;
            assertCanConvert_function_type assertCanConvert_function_value( &::SireMol::SegProperty< QString >::assertCanConvert );
            
            SegStringProperty_exposer.def( 
                "assertCanConvert"
                , assertCanConvert_function_value
                , ( bp::arg("value") ) );
        
        }
        { //::SireMol::SegProperty< QString >::assignFrom
        
            typedef SireMol::SegProperty< QString > exported_class_t;
            typedef void ( ::SireMol::SegProperty< QString >::*assignFrom_function_type)( ::SireMol::SegProperty< QVariant > const & ) ;
            assignFrom_function_type assignFrom_function_value( &::SireMol::SegProperty< QString >::assignFrom );
            
            SegStringProperty_exposer.def( 
                "assignFrom"
                , assignFrom_function_value
                , ( bp::arg("values") ) );
        
        }
        { //::SireMol::SegProperty< QString >::at
        
            typedef SireMol::SegProperty< QString > exported_class_t;
            typedef ::QString const & ( ::SireMol::SegProperty< QString >::*at_function_type)( ::SireMol::SegIdx const & ) const;
            at_function_type at_function_value( &::SireMol::SegProperty< QString >::at );
            
            SegStringProperty_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("segidx") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireMol::SegProperty< QString >::canConvert
        
            typedef SireMol::SegProperty< QString > exported_class_t;
            typedef bool ( ::SireMol::SegProperty< QString >::*canConvert_function_type)( ::QVariant const & ) const;
            canConvert_function_type canConvert_function_value( &::SireMol::SegProperty< QString >::canConvert );
            
            SegStringProperty_exposer.def( 
                "canConvert"
                , canConvert_function_value
                , ( bp::arg("value") ) );
        
        }
        { //::SireMol::SegProperty< QString >::count
        
            typedef SireMol::SegProperty< QString > exported_class_t;
            typedef int ( ::SireMol::SegProperty< QString >::*count_function_type)(  ) const;
            count_function_type count_function_value( &::SireMol::SegProperty< QString >::count );
            
            SegStringProperty_exposer.def( 
                "count"
                , count_function_value );
        
        }
        { //::SireMol::SegProperty< QString >::fromVariant
        
            typedef SireMol::SegProperty< QString > exported_class_t;
            typedef ::SireMol::SegProperty< QString > ( *fromVariant_function_type )( ::SireMol::SegProperty< QVariant > const & );
            fromVariant_function_type fromVariant_function_value( &::SireMol::SegProperty< QString >::fromVariant );
            
            SegStringProperty_exposer.def( 
                "fromVariant"
                , fromVariant_function_value
                , ( bp::arg("values") ) );
        
        }
        { //::SireMol::SegProperty< QString >::get
        
            typedef SireMol::SegProperty< QString > exported_class_t;
            typedef ::QString const & ( ::SireMol::SegProperty< QString >::*get_function_type)( ::SireMol::SegIdx const & ) const;
            get_function_type get_function_value( &::SireMol::SegProperty< QString >::get );
            
            SegStringProperty_exposer.def( 
                "get"
                , get_function_value
                , ( bp::arg("segidx") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireMol::SegProperty< QString >::isCompatibleWith
        
            typedef SireMol::SegProperty< QString > exported_class_t;
            typedef bool ( ::SireMol::SegProperty< QString >::*isCompatibleWith_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            isCompatibleWith_function_type isCompatibleWith_function_value( &::SireMol::SegProperty< QString >::isCompatibleWith );
            
            SegStringProperty_exposer.def( 
                "isCompatibleWith"
                , isCompatibleWith_function_value
                , ( bp::arg("molinfo") ) );
        
        }
        { //::SireMol::SegProperty< QString >::isEmpty
        
            typedef SireMol::SegProperty< QString > exported_class_t;
            typedef bool ( ::SireMol::SegProperty< QString >::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireMol::SegProperty< QString >::isEmpty );
            
            SegStringProperty_exposer.def( 
                "isEmpty"
                , isEmpty_function_value );
        
        }
        { //::SireMol::SegProperty< QString >::nSegments
        
            typedef SireMol::SegProperty< QString > exported_class_t;
            typedef int ( ::SireMol::SegProperty< QString >::*nSegments_function_type)(  ) const;
            nSegments_function_type nSegments_function_value( &::SireMol::SegProperty< QString >::nSegments );
            
            SegStringProperty_exposer.def( 
                "nSegments"
                , nSegments_function_value );
        
        }
        SegStringProperty_exposer.def( bp::self != bp::self );
        { //::SireMol::SegProperty< QString >::operator=
        
            typedef SireMol::SegProperty< QString > exported_class_t;
            typedef ::SireMol::SegProperty< QString > & ( ::SireMol::SegProperty< QString >::*assign_function_type)( ::SireMol::SegProperty< QString > const & ) ;
            assign_function_type assign_function_value( &::SireMol::SegProperty< QString >::operator= );
            
            SegStringProperty_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        SegStringProperty_exposer.def( bp::self == bp::self );
        { //::SireMol::SegProperty< QString >::operator[]
        
            typedef SireMol::SegProperty< QString > exported_class_t;
            typedef ::QString const & ( ::SireMol::SegProperty< QString >::*__getitem___function_type)( ::SireMol::SegIdx const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::SegProperty< QString >::operator[] );
            
            SegStringProperty_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("segidx") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireMol::SegProperty< QString >::set
        
            typedef SireMol::SegProperty< QString > exported_class_t;
            typedef ::SireMol::SegProperty< QString > & ( ::SireMol::SegProperty< QString >::*set_function_type)( ::SireMol::SegIdx,::QString const & ) ;
            set_function_type set_function_value( &::SireMol::SegProperty< QString >::set );
            
            SegStringProperty_exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("segidx"), bp::arg("value") )
                , bp::return_self< >() );
        
        }
        { //::SireMol::SegProperty< QString >::size
        
            typedef SireMol::SegProperty< QString > exported_class_t;
            typedef int ( ::SireMol::SegProperty< QString >::*size_function_type)(  ) const;
            size_function_type size_function_value( &::SireMol::SegProperty< QString >::size );
            
            SegStringProperty_exposer.def( 
                "size"
                , size_function_value );
        
        }
        { //::SireMol::SegProperty< QString >::toString
        
            typedef SireMol::SegProperty< QString > exported_class_t;
            typedef ::QString ( ::SireMol::SegProperty< QString >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::SegProperty< QString >::toString );
            
            SegStringProperty_exposer.def( 
                "toString"
                , toString_function_value );
        
        }
        { //::SireMol::SegProperty< QString >::toVariant
        
            typedef SireMol::SegProperty< QString > exported_class_t;
            typedef ::SireMol::SegProperty< QVariant > ( ::SireMol::SegProperty< QString >::*toVariant_function_type)(  ) const;
            toVariant_function_type toVariant_function_value( &::SireMol::SegProperty< QString >::toVariant );
            
            SegStringProperty_exposer.def( 
                "toVariant"
                , toVariant_function_value );
        
        }
        { //::SireMol::SegProperty< QString >::typeName
        
            typedef SireMol::SegProperty< QString > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::SegProperty< QString >::typeName );
            
            SegStringProperty_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        SegStringProperty_exposer.staticmethod( "fromVariant" );
        SegStringProperty_exposer.staticmethod( "typeName" );
        SegStringProperty_exposer.def( "__copy__", &__copy__);
        SegStringProperty_exposer.def( "__deepcopy__", &__copy__);
        SegStringProperty_exposer.def( "clone", &__copy__);
        SegStringProperty_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::SegProperty<QString> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        SegStringProperty_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::SegProperty<QString> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        SegStringProperty_exposer.def( "__str__", &__str__< ::SireMol::SegProperty<QString> > );
        SegStringProperty_exposer.def( "__repr__", &__str__< ::SireMol::SegProperty<QString> > );
        SegStringProperty_exposer.def( "__len__", &__len_size< ::SireMol::SegProperty<QString> > );
    }

}
