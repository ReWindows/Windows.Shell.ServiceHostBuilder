#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Shell.ServiceHostBuilder.dll by Windissect. 11 member(s).
class CServiceHostController {
public:
    class ComponentInfo;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CServiceHostController@@QEAA@XZ
    CServiceHostController();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCOMServerRegistrationType@CServiceHostController@@UEAAJW4SERVICEHOSTCONTROLLER_COM_REGISTRATION_TYPE@@@Z
    virtual long SetCOMServerRegistrationType(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCreationBehavior@CServiceHostController@@UEAAJPEAUIServiceHostCreationBehavior@@@Z
    virtual long SetCreationBehavior(IServiceHostCreationBehavior *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@CServiceHostController@@UEAAJAEBU_GUID@@00@Z
    virtual long Start(_GUID const &, _GUID const &, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CServiceHostController@@UEAAJXZ
    virtual long Stop();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CServiceHostController@@UEAA@XZ
    virtual ~CServiceHostController();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupComponents@CServiceHostController@@AEAAXXZ
    void CleanupComponents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateComponents@CServiceHostController@@AEAAJXZ
    long CreateComponents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartServer@CServiceHostController@@AEAAJXZ
    long StartServer();
};
