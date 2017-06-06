#include "solverconf_helper.h"

size_t setup_map(sc_entry *entries, CMSat::SolverConf &solver_conf, const size_t n) {
  assert(n >= 53);
  entries[ 0].type = t_double, entries[ 0].name = "random_var_freq", entries[ 0].target = (void*)&(solver_conf.random_var_freq), entries[ 0].doc = "The frequency with which the decision heuristic tries to choose a random variable.        (default 0.02)";
  entries[ 1].type = t_double, entries[ 1].name = "clause_decay", entries[ 1].target = (void*)&(solver_conf.clause_decay), entries[ 1].doc = "Inverse of the clause activity decay factor. Only applies if using MiniSat-style clause activities  (default: 1 / 0.999)";
  entries[ 2].type = t_int, entries[ 2].name = "restart_first", entries[ 2].target = (void*)&(solver_conf.restart_first), entries[ 2].doc = "The initial restart limit.                                                                (default 100)";
  entries[ 3].type = t_double, entries[ 3].name = "restart_inc", entries[ 3].target = (void*)&(solver_conf.restart_inc), entries[ 3].doc = "The factor with which the restart limit is multiplied in each restart.                    (default 1.5)";
  entries[ 4].type = t_double, entries[ 4].name = "learntsize_factor", entries[ 4].target = (void*)&(solver_conf.learntsize_factor), entries[ 4].doc = "The initial limit for learnt clauses is a factor of the original clauses.                (default 1 / 3)";
  entries[ 5].type = t_double, entries[ 5].name = "learntsize_inc", entries[ 5].target = (void*)&(solver_conf.learntsize_inc), entries[ 5].doc = "The limit for learnt clauses is multiplied with this factor each restart.                 (default 1.1)";
  entries[ 6].type = t_bool, entries[ 6].name = "expensive_ccmin", entries[ 6].target = (void*)&(solver_conf.expensive_ccmin), entries[ 6].doc = "Should clause minimisation by Sorensson&Biere be used?                                    (default TRUE)";
  entries[ 7].type = t_int, entries[ 7].name = "polarity_mode", entries[ 7].target = (void*)&(solver_conf.polarity_mode), entries[ 7].doc = "Controls which polarity the decision heuristic chooses. Auto means Jeroslow-Wang          (default: polarity_auto)";
  entries[ 8].type = t_int, entries[ 8].name = "verbosity", entries[ 8].target = (void*)&(solver_conf.verbosity), entries[ 8].doc = "Verbosity level. 0=silent, 1=some progress report, 2=lots of report, 3 = all report       (default 2)";
  entries[ 9].type = t_Var, entries[ 9].name = "restrictPickBranch", entries[ 9].target = (void*)&(solver_conf.restrictPickBranch), entries[ 9].doc = "Pick variables to branch on preferentally from the highest [0, restrictedPickBranch]. If set to 0, preferentiality is turned off (i.e. picked randomly between [0, all])";
  entries[10].type = t_uint32_t, entries[10].name = "simpBurstSConf", entries[10].target = (void*)&(solver_conf.simpBurstSConf), entries[10].doc = "";
  entries[11].type = t_double, entries[11].name = "simpStartMult", entries[11].target = (void*)&(solver_conf.simpStartMult), entries[11].doc = "";
  entries[12].type = t_double, entries[12].name = "simpStartMMult", entries[12].target = (void*)&(solver_conf.simpStartMMult), entries[12].doc = "";
  entries[13].type = t_bool, entries[13].name = "doPerformPreSimp", entries[13].target = (void*)&(solver_conf.doPerformPreSimp), entries[13].doc = "";
  entries[14].type = t_double, entries[14].name = "failedLitMultiplier", entries[14].target = (void*)&(solver_conf.failedLitMultiplier), entries[14].doc = "";
  entries[15].type = t_bool, entries[15].name = "doFindXors", entries[15].target = (void*)&(solver_conf.doFindXors), entries[15].doc = "Automatically find non-binary xor clauses and convert them to xor clauses";
  entries[16].type = t_bool, entries[16].name = "doFindEqLits", entries[16].target = (void*)&(solver_conf.doFindEqLits), entries[16].doc = "Automatically find binary xor clauses (i.e. variable equi- and antivalences)";
  entries[17].type = t_bool, entries[17].name = "doRegFindEqLits", entries[17].target = (void*)&(solver_conf.doRegFindEqLits), entries[17].doc = "Regularly find binary xor clauses (i.e. variable equi- and antivalences)";
  entries[18].type = t_bool, entries[18].name = "doReplace", entries[18].target = (void*)&(solver_conf.doReplace), entries[18].doc = "Should var-replacing be performed? If set to FALSE, equi- and antivalent variables will not be replaced with one another.";
  entries[19].type = t_bool, entries[19].name = "doConglXors", entries[19].target = (void*)&(solver_conf.doConglXors), entries[19].doc = "Do variable elimination at the XOR-level (xor-ing 2 xor clauses thereby removing a variable)";
  entries[20].type = t_bool, entries[20].name = "doHeuleProcess", entries[20].target = (void*)&(solver_conf.doHeuleProcess), entries[20].doc = "Perform local substitution as per Heule's theis";
  entries[21].type = t_bool, entries[21].name = "doSchedSimp", entries[21].target = (void*)&(solver_conf.doSchedSimp), entries[21].doc = "Should simplifyProblem() be scheduled regularly? (if set to FALSE, a lot of optimisations are disabled)";
  entries[22].type = t_bool, entries[22].name = "doSatELite", entries[22].target = (void*)&(solver_conf.doSatELite), entries[22].doc = "Should try to subsume & self-subsuming resolve & variable-eliminate & block-clause eliminate?";
  entries[23].type = t_bool, entries[23].name = "doXorSubsumption", entries[23].target = (void*)&(solver_conf.doXorSubsumption), entries[23].doc = "Should try to subsume & local-subsitute xor clauses";
  entries[24].type = t_bool, entries[24].name = "doHyperBinRes", entries[24].target = (void*)&(solver_conf.doHyperBinRes), entries[24].doc = "Should try carry out hyper-binary resolution";
  entries[25].type = t_bool, entries[25].name = "doBlockedClause", entries[25].target = (void*)&(solver_conf.doBlockedClause), entries[25].doc = "Should try to remove blocked clauses";
  entries[26].type = t_bool, entries[26].name = "doVarElim", entries[26].target = (void*)&(solver_conf.doVarElim), entries[26].doc = "Perform variable elimination";
  entries[27].type = t_bool, entries[27].name = "doSubsume1", entries[27].target = (void*)&(solver_conf.doSubsume1), entries[27].doc = "Perform self-subsuming resolution";
  entries[28].type = t_bool, entries[28].name = "doClausVivif", entries[28].target = (void*)&(solver_conf.doClausVivif), entries[28].doc = "Perform asymmetric branching at the beginning of the solving";
  entries[29].type = t_bool, entries[29].name = "doSortWatched", entries[29].target = (void*)&(solver_conf.doSortWatched), entries[29].doc = "Sort watchlists according to size&type: binary, tertiary, normal (>3-long), xor clauses";
  entries[30].type = t_bool, entries[30].name = "doMinimLearntMore", entries[30].target = (void*)&(solver_conf.doMinimLearntMore), entries[30].doc = "Perform learnt-clause minimisation using watchists' binary and tertiary clauses? ('strong minimization' in PrecoSat)";
  entries[31].type = t_bool, entries[31].name = "doMinimLMoreRecur", entries[31].target = (void*)&(solver_conf.doMinimLMoreRecur), entries[31].doc = "Always perform recursive/transitive on-the-fly self self-subsuming resolution --> an enhancement of 'strong minimization' of PrecoSat";
  entries[32].type = t_bool, entries[32].name = "doFailedLit", entries[32].target = (void*)&(solver_conf.doFailedLit), entries[32].doc = "Carry out Failed literal probing + doubly propagated literal detection + 2-long xor clause detection during failed literal probing + hyper-binary resolution";
  entries[33].type = t_bool, entries[33].name = "doRemUselessBins", entries[33].target = (void*)&(solver_conf.doRemUselessBins), entries[33].doc = "Should try to remove useless binary clauses at the beginning of solving?";
  entries[34].type = t_bool, entries[34].name = "doSubsWBins", entries[34].target = (void*)&(solver_conf.doSubsWBins), entries[34].doc = "";
  entries[35].type = t_bool, entries[35].name = "doSubsWNonExistBins", entries[35].target = (void*)&(solver_conf.doSubsWNonExistBins), entries[35].doc = "Try to do subsumption and self-subsuming resolution with non-existent binary clauses (i.e. binary clauses that don't exist but COULD exists)";
  entries[36].type = t_bool, entries[36].name = "doRemUselessLBins", entries[36].target = (void*)&(solver_conf.doRemUselessLBins), entries[36].doc = "Try to remove useless learnt binary clauses";
  entries[37].type = t_bool, entries[37].name = "doPrintAvgBranch", entries[37].target = (void*)&(solver_conf.doPrintAvgBranch), entries[37].doc = "";
  entries[38].type = t_bool, entries[38].name = "doCacheOTFSSR", entries[38].target = (void*)&(solver_conf.doCacheOTFSSR), entries[38].doc = "";
  entries[39].type = t_bool, entries[39].name = "doCacheOTFSSRSet", entries[39].target = (void*)&(solver_conf.doCacheOTFSSRSet), entries[39].doc = "";
  entries[40].type = t_bool, entries[40].name = "doExtendedSCC", entries[40].target = (void*)&(solver_conf.doExtendedSCC), entries[40].doc = "";
  entries[41].type = t_bool, entries[41].name = "doCalcReach", entries[41].target = (void*)&(solver_conf.doCalcReach), entries[41].doc = "Calculate reachability, and influence variable decisions with that";
  entries[42].type = t_bool, entries[42].name = "doBXor", entries[42].target = (void*)&(solver_conf.doBXor), entries[42].doc = "";
  entries[43].type = t_bool, entries[43].name = "doOTFSubsume", entries[43].target = (void*)&(solver_conf.doOTFSubsume), entries[43].doc = " ///On-the-fly subsumption";
  entries[44].type = t_uint64_t, entries[44].name = "maxConfl", entries[44].target = (void*)&(solver_conf.maxConfl), entries[44].doc = "";
  entries[45].type = t_bool, entries[45].name = "isPlain", entries[45].target = (void*)&(solver_conf.isPlain), entries[45].doc = "We are in 'plain' mode: glues can never be 1";
  entries[46].type = t_uint32_t, entries[46].name = "maxRestarts", entries[46].target = (void*)&(solver_conf.maxRestarts), entries[46].doc = "";
  entries[47].type = t_bool, entries[47].name = "needToDumpLearnts", entries[47].target = (void*)&(solver_conf.needToDumpLearnts), entries[47].doc = "If set to TRUE, learnt clauses will be dumped to the file speified by 'learntsFilename'";
  entries[48].type = t_bool, entries[48].name = "needToDumpOrig", entries[48].target = (void*)&(solver_conf.needToDumpOrig), entries[48].doc = "If set to TRUE, a simplified version of the original clause-set will be dumped to the file speified by 'origFilename'. The solution to this file should perfectly satisfy the problem";
  entries[49].type = t_uint32_t, entries[49].name = "maxDumpLearntsSize", entries[49].target = (void*)&(solver_conf.maxDumpLearntsSize), entries[49].doc = "When dumping the learnt clauses, this is the maximum clause size that should be dumped";
  entries[50].type = t_bool, entries[50].name = "libraryUsage", entries[50].target = (void*)&(solver_conf.libraryUsage), entries[50].doc = "Set to true if not used as a library. In fact, this is TRUE by default, and Main.cpp sets it to 'FALSE'. Disables some simplifications at the beginning of solving (mostly performStepsBeforeSolve() )";
  entries[51].type = t_bool, entries[51].name = "greedyUnbound", entries[51].target = (void*)&(solver_conf.greedyUnbound), entries[51].doc = "If set, then variables will be greedily unbounded (set to l_Undef). This is EXPERIMENTAL";
  entries[52].type = t_uint32_t, entries[52].name = "origSeed", entries[52].target = (void*)&(solver_conf.origSeed), entries[52].doc = "";
  return 53;
}
