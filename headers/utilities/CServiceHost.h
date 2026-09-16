#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Shell.ServiceHostBuilder.dll by Windissect. 13 member(s).
class CServiceHost {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CServiceHost@@QEAA@PEAUIServiceHostCreationBehavior@@AEBU_GUID@@1W4tagCLSCTX@@@Z
    CServiceHost(IServiceHostCreationBehavior *, _GUID const &, _GUID const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBroker@CServiceHost@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetBroker(_GUID const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesiredCLSCTXForServiceHostBrokerComponent@CServiceHost@@UEAA?AW4tagCLSCTX@@XZ
    virtual int GetDesiredCLSCTXForServiceHostBrokerComponent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLPACBroker@CServiceHost@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetLPACBroker(_GUID const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetServiceHostBrokerClsId@CServiceHost@@UEAA?AU_GUID@@XZ
    virtual _GUID GetServiceHostBrokerClsId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetServiceHostLPACBrokerClsId@CServiceHost@@UEAA?AU_GUID@@XZ
    virtual _GUID GetServiceHostLPACBrokerClsId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CServiceHost@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterBrokerProvider@CServiceHost@@UEAAJPEAUIServiceHostBrokerProvider@@@Z
    virtual long RegisterBrokerProvider(IServiceHostBrokerProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterBrokerProvider@CServiceHost@@UEAAJPEAUIServiceHostBrokerProvider@@@Z
    virtual long UnregisterBrokerProvider(IServiceHostBrokerProvider *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CServiceHost@@UEAA@XZ
    virtual ~CServiceHost();
};
