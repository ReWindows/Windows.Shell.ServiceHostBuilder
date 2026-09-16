#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Shell.ServiceHostBuilder.dll by Windissect. 8 member(s).
class CCriticalFailureHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPreviousFailure@CCriticalFailureHandler@@QEBAXXZ
    void ClearPreviousFailure() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z
    void GetFakeFailure(long *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z
    void HandleFailure(long *, unsigned short const *, unsigned int, uint64_t *, uint64_t *) const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MatchesPreviousFailure@CCriticalFailureHandler@@AEBA_NJPEBGIPEA_K1@Z
    bool _MatchesPreviousFailure(long, unsigned short const *, unsigned int, uint64_t *, uint64_t *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RaiseFailFastException@CCriticalFailureHandler@@AEBAXJPEA_K0@Z
    void _RaiseFailFastException(long, uint64_t *, uint64_t *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RaiseFailFastExceptionInvalidOXID@CCriticalFailureHandler@@AEBAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z
    void _RaiseFailFastExceptionInvalidOXID(_EXCEPTION_RECORD *, _CONTEXT *, unsigned long) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RaiseFailFastExceptionRPCFailedDNE@CCriticalFailureHandler@@AEBAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z
    void _RaiseFailFastExceptionRPCFailedDNE(_EXCEPTION_RECORD *, _CONTEXT *, unsigned long) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RecordFailure@CCriticalFailureHandler@@AEBAXJPEBGIPEA_K1@Z
    void _RecordFailure(long, unsigned short const *, unsigned int, uint64_t *, uint64_t *) const;
};
