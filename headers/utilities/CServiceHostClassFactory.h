#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Shell.ServiceHostBuilder.dll by Windissect. 5 member(s).
class CServiceHostClassFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CServiceHostClassFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockServer@CServiceHostClassFactory@@UEAAJH@Z
    virtual long LockServer(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CServiceHostClassFactory@@UEAA@XZ
    virtual ~CServiceHostClassFactory();
};
