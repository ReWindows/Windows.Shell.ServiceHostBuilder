#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Shell.ServiceHostBuilder.dll by Windissect. 8 member(s).
class CServiceHostBrokerComponent {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CServiceHostBrokerComponent@@UEAA@XZ
    virtual ~CServiceHostBrokerComponent();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDelayedInitialization@CServiceHostBrokerComponent@@EEAAJXZ
    virtual long PerformDelayedInitialization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PublishServices@CServiceHostBrokerComponent@@EEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z
    virtual long PublishServices(IServiceProvider *, IProfferService *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownServices@CServiceHostBrokerComponent@@EEAAJPEAUIProfferService@@@Z
    virtual long ShutdownServices(IProfferService *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@CServiceHostBrokerComponent@@EEAAJPEAUIServiceProvider@@PEAUIServiceHostBrokerRegistrar@@@Z
    virtual long SubscribeToServices(IServiceProvider *, IServiceHostBrokerRegistrar *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@CServiceHostBrokerComponent@@EEAAJPEAUIServiceProvider@@PEAUIServiceHostBrokerRegistrar@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *, IServiceHostBrokerRegistrar *);
};
