//WARNING - AUTOGENERATED FILE - CONTENTS WILL BE OVERWRITTEN!
#include <Python.h>

#include "SireSystem_registrars.h"

#include "constraints.h"
#include "closemols.h"
#include "monitoridentifier.h"
#include "monitorname.h"
#include "identityconstraint.h"
#include "monitorcomponents.h"
#include "systemmonitor.h"
#include "system.h"
#include "freeenergymonitor.h"
#include "sysidx.h"
#include "polarisecharges.h"
#include "sysname.h"
#include "volmapmonitor.h"
#include "monitormonitor.h"
#include "energymonitor.h"
#include "distancecomponent.h"
#include "perturbationconstraint.h"
#include "monitorproperty.h"
#include "systemmonitors.h"
#include "anglecomponent.h"
#include "constraint.h"
#include "dihedralcomponent.h"
#include "monitorcomponent.h"
#include "sysidentifier.h"
#include "spacewrapper.h"
#include "idassigner.h"
#include "monitoridx.h"
#include "checkpoint.h"

#include "Helpers/objectregistry.hpp"

void register_SireSystem_objects()
{

    ObjectRegistry::registerConverterFor< SireSystem::Constraints >();
    ObjectRegistry::registerConverterFor< SireSystem::CloseMols >();
    ObjectRegistry::registerConverterFor< SireID::Specify<SireSystem::MonitorID> >();
    ObjectRegistry::registerConverterFor< SireID::IDAndSet<SireSystem::MonitorID> >();
    ObjectRegistry::registerConverterFor< SireID::IDOrSet<SireSystem::MonitorID> >();
    ObjectRegistry::registerConverterFor< SireSystem::MonitorIdentifier >();
    ObjectRegistry::registerConverterFor< SireSystem::MonitorName >();
    ObjectRegistry::registerConverterFor< SireSystem::IdentityConstraint >();
    ObjectRegistry::registerConverterFor< SireSystem::MonitorComponents >();
    ObjectRegistry::registerConverterFor< SireSystem::NullMonitor >();
    ObjectRegistry::registerConverterFor< SireSystem::System >();
    ObjectRegistry::registerConverterFor< SireSystem::FreeEnergyMonitor >();
    ObjectRegistry::registerConverterFor< SireSystem::AssignerGroup >();
    ObjectRegistry::registerConverterFor< SireSystem::SysIdx >();
    ObjectRegistry::registerConverterFor< SireSystem::PolariseCharges >();
    ObjectRegistry::registerConverterFor< SireSystem::PolariseChargesFF >();
    ObjectRegistry::registerConverterFor< SireSystem::SysName >();
    ObjectRegistry::registerConverterFor< SireSystem::VolMapMonitor >();
    ObjectRegistry::registerConverterFor< SireSystem::MonitorMonitor >();
    ObjectRegistry::registerConverterFor< SireSystem::EnergyMonitor >();
    ObjectRegistry::registerConverterFor< SireSystem::DistanceComponent >();
    ObjectRegistry::registerConverterFor< SireSystem::DoubleDistanceComponent >();
    ObjectRegistry::registerConverterFor< SireSystem::TripleDistanceComponent >();
    ObjectRegistry::registerConverterFor< SireSystem::PerturbationConstraint >();
    ObjectRegistry::registerConverterFor< SireSystem::MonitorProperty >();
    ObjectRegistry::registerConverterFor< SireSystem::SystemMonitors >();
    ObjectRegistry::registerConverterFor< SireSystem::AngleComponent >();
    ObjectRegistry::registerConverterFor< SireSystem::NullConstraint >();
    ObjectRegistry::registerConverterFor< SireSystem::PropertyConstraint >();
    ObjectRegistry::registerConverterFor< SireSystem::ComponentConstraint >();
    ObjectRegistry::registerConverterFor< SireSystem::WindowedComponent >();
    ObjectRegistry::registerConverterFor< SireSystem::DihedralComponent >();
    ObjectRegistry::registerConverterFor< SireSystem::MonitorComponent >();
    ObjectRegistry::registerConverterFor< SireID::Specify<SireSystem::SysID> >();
    ObjectRegistry::registerConverterFor< SireID::IDAndSet<SireSystem::SysID> >();
    ObjectRegistry::registerConverterFor< SireID::IDOrSet<SireSystem::SysID> >();
    ObjectRegistry::registerConverterFor< SireSystem::SysIdentifier >();
    ObjectRegistry::registerConverterFor< SireSystem::SpaceWrapper >();
    ObjectRegistry::registerConverterFor< SireSystem::IDAssigner >();
    ObjectRegistry::registerConverterFor< SireSystem::MonitorIdx >();
    ObjectRegistry::registerConverterFor< SireSystem::CheckPoint >();

}

