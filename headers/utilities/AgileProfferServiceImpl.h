#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Shell.ServiceHostBuilder.dll by Windissect. 4 member(s).
class AgileProfferServiceImpl {
public:
    class ServiceItem;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetServiceIds@AgileProfferServiceImpl@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetServiceIds(unsigned long *, _GUID * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProfferService@AgileProfferServiceImpl@@UEAAJAEBU_GUID@@PEAUIServiceProvider@@PEAK@Z
    virtual long ProfferService(_GUID const &, IServiceProvider *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@AgileProfferServiceImpl@@QEAAJAEBU_GUID@@0PEAPEAX@Z
    long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RevokeService@AgileProfferServiceImpl@@UEAAJK@Z
    virtual long RevokeService(unsigned long);
};
