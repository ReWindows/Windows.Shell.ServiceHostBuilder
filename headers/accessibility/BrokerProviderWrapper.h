#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Shell.ServiceHostBuilder.dll by Windissect. 5 member(s).
class BrokerProviderWrapper {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BrokerProviderWrapper@@QEAA@PEAUIServiceHostBrokerProvider@@_N@Z
    BrokerProviderWrapper(IServiceHostBrokerProvider *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBroker@BrokerProviderWrapper@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetBroker(_GUID const &, _GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BrokerProviderWrapper@@UEAA@XZ
    virtual ~BrokerProviderWrapper();
};
