#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Shell.ServiceHostBuilder.dll by Windissect. 6 member(s).
class CServiceHostBrokerProviderClassFactory {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CServiceHostBrokerProviderClassFactory@@QEAA@PEAUIServiceHostBrokerProvider@@_N@Z
    CServiceHostBrokerProviderClassFactory(IServiceHostBrokerProvider *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CServiceHostBrokerProviderClassFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockServer@CServiceHostBrokerProviderClassFactory@@UEAAJH@Z
    virtual long LockServer(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CServiceHostBrokerProviderClassFactory@@UEAA@XZ
    virtual ~CServiceHostBrokerProviderClassFactory();
};
