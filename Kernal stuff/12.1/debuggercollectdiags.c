
/* WARNING: Removing unreachable block (ram,0xfffffff00710a560) */
/* WARNING: Removing unreachable block (ram,0xfffffff00710a578) */
/* WARNING: Removing unreachable block (ram,0xfffffff00710a59c) */
/* WARNING: Removing unreachable block (ram,0xfffffff00710a600) */
/* WARNING: Removing unreachable block (ram,0xfffffff00710a610) */
/* WARNING: Removing unreachable block (ram,0xfffffff00710a828) */
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void _debugger_collect_diagnostics(void)

{
  bool bVar1;
  void *pvVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined **ppuVar8;
  longlong in_tpidr_el1;
  int iVar9;
  int iVar10;
  longlong lVar11;
  char *pcVar12;
  ulonglong uVar13;
  undefined **ppuVar14;
  ulonglong uVar15;
  undefined ***pppuVar16;
  undefined uVar17;
  longlong **pplVar18;
  longlong lVar19;
  undefined *puVar20;
  undefined *unaff_x21;
  undefined **ppuVar21;
  undefined *unaff_x22;
  undefined *puVar22;
  longlong lVar23;
  longlong lVar24;
  undefined *puVar25;
  ulonglong uVar26;
  uint uVar27;
  undefined *unaff_x26;
  undefined *puVar28;
  undefined local_b4;
  longlong local_b0;
  undefined *local_a8;
  char acStack153 [17];
  undefined8 local_88;
  undefined **ppuStack128;
  undefined **local_78;
  undefined **ppuStack112;
  undefined **local_68;
  
  puVar22 = &stack0xfffffffffffffff0;
  pplVar18 = _kdp_callout_list;
  if (_debugger_current_op - 3U < 2) {
    if ((panic_begin_called & 1) == 0) {
      panic_begin_called = 1;
      _IOCPURunPlatformPanicActions(7);
    }
    if (__ZL11gIOPlatform_19012 != (longlong *)0x0) {
      (**(code **)(*__ZL11gIOPlatform_19012 + 0x5b0))(__ZL11gIOPlatform_19012,7);
    }
    puVar7 = _panic_info;
    unaff_x21 = &DAT_fffffff0075d8000;
    if ((_debugger_collect_diagnostics_began_writing_paniclog & 1) == 0) {
      if (_panic_info != (undefined4 *)0x0) {
        ___bzero(_panic_info,0x34);
        puVar7 = _panic_info;
        _panic_info[5] = (int)_debug_buf_base - (int)_gPanicBase;
        *puVar7 = 0x46554e4b;
        puVar7[2] = 2;
      }
      _debugger_collect_diagnostics_began_writing_paniclog = 1;
    }
    else {
      if (_panic_info != (undefined4 *)0x0) {
        if (_panic_info[5] == 0) {
          ___bzero(_panic_info,0x34);
          puVar7 = _panic_info;
          _panic_info[5] = (int)_debug_buf_base - (int)_gPanicBase;
          *puVar7 = 0x46554e4b;
          puVar7[2] = 2;
          *(ulonglong *)(puVar7 + 3) = *(ulonglong *)(puVar7 + 3) | 0x40;
        }
        else {
          *(ulonglong *)(_panic_info + 3) = *(ulonglong *)(_panic_info + 3) | 0x40;
          if (puVar7[6] == 0) {
            puVar7[6] = (int)_debug_buf_ptr - (int)_gPanicBase;
          }
          if (puVar7[9] == 0) {
            puVar7[9] = (int)_debug_buf_ptr - (int)_gPanicBase;
          }
        }
      }
    }
    pplVar18 = _kdp_callout_list;
    if (_debugger_current_op == 3) {
      _paniclog_append_noflush("panic(cpu %d caller 0x%lx): ");
      if (_debugger_panic_str != 0) {
        ___doprnt(_debugger_panic_str,*_debugger_panic_args,&_dummy_putc,_consdebug_putc,0,0);
      }
      _paniclog_append_noflush("\n");
      pplVar18 = _kdp_callout_list;
    }
  }
  while (pplVar18 != (longlong **)0x0) {
    while (*(int *)(pplVar18 + 2) == 0) {
      *(undefined4 *)(pplVar18 + 2) = 1;
      (*(code *)pplVar18[1])(pplVar18[3],2);
      *(undefined4 *)(pplVar18 + 2) = 0;
      pplVar18 = (longlong **)*pplVar18;
      if (pplVar18 == (longlong **)0x0) goto LAB_fffffff00710a440;
    }
    pplVar18 = (longlong **)*pplVar18;
  }
LAB_fffffff00710a440:
  pcVar12 = _debugger_message;
  uVar4 = CONCAT71(_debugger_panic_options._1_7_,(byte)_debugger_panic_options);
  if (((byte)_debugger_panic_options & 1) != 0) {
    *(ulonglong *)(_panic_info + 3) = *(ulonglong *)(_panic_info + 3) | 0x80;
  }
  if (((uint)uVar4 >> 6 & 1) != 0) {
    *(ulonglong *)(_panic_info + 3) = *(ulonglong *)(_panic_info + 3) | 0x100;
  }
  puVar20 = &DAT_fffffff00761d000;
  if (_PanicInfoSaved == '\x01') {
    unaff_x21 = &DAT_fffffff007644000;
    uVar26 = CONCAT44(_gPanicBase._4_4_,(int)_gPanicBase);
    if (CONCAT44(_debug_buf_base._4_4_,(int)_debug_buf_base) < uVar26) goto LAB_fffffff00710b2cc;
    unaff_x22 = &DAT_fffffff007644000;
    if (uVar26 + (ulonglong)_gPanicSize <= CONCAT44(_debug_buf_base._4_4_,(int)_debug_buf_base))
    goto LAB_fffffff00710b2cc;
    local_88._0_4_ = (int)_debug_buf_ptr - (int)_gPanicBase;
    _PE_save_buffer_to_vram(uVar26,&local_88);
    if (CONCAT44(_gPanicBase._4_4_,(int)_gPanicBase) != 0) {
      _CleanPoC_DcacheRegion_Force
                (CONCAT44(_gPanicBase._4_4_,(int)_gPanicBase),(ulonglong)_gPanicSize);
    }
    if (_PanicInfoSaved != '\0') goto LAB_fffffff00710b2cc;
  }
  uVar17 = _not_in_kdp;
  if (_debug_buf_size == 0) goto LAB_fffffff00710b2cc;
  _PanicInfoSaved = '\x01';
  lVar23 = *(longlong *)(in_tpidr_el1 + 0x438);
  *(undefined4 *)(lVar23 + 0x238) = 1;
  _not_in_kdp = 1;
  if (_panic_bt_depth != 0) goto LAB_fffffff00710b234;
  _panic_bt_depth = 1;
  _paniclog_append_noflush("Debugger message: %.1200s\n");
  _paniclog_append_noflush("Memory ID: 0x%x\n");
  _paniclog_append_noflush("OS version: %.256s\n");
  _paniclog_append_noflush("Kernel version: %.512s\n");
  if (_kernelcache_uuid_valid != 0) {
    _paniclog_append_noflush("KernelCache UUID: ");
    _paniclog_append_noflush("%02X");
    _paniclog_append_noflush("%02X");
    _paniclog_append_noflush("%02X");
    _paniclog_append_noflush("%02X");
    _paniclog_append_noflush("%02X");
    _paniclog_append_noflush("%02X");
    _paniclog_append_noflush("%02X");
    _paniclog_append_noflush("%02X");
    _paniclog_append_noflush("%02X");
    _paniclog_append_noflush("%02X");
    _paniclog_append_noflush("%02X");
    _paniclog_append_noflush("%02X");
    _paniclog_append_noflush("%02X");
    _paniclog_append_noflush("%02X");
    _paniclog_append_noflush("%02X");
    _paniclog_append_noflush("%02X");
    _paniclog_append_noflush("\n");
  }
  lVar11 = _ml_nofault_copy(&_kernel_uuid_string,&local_88,0x25);
  if ((lVar11 == 0x25) && ((char)local_88 != '\0')) {
    _paniclog_append_noflush("Kernel UUID: %s\n");
  }
  _paniclog_append_noflush("iBoot version: %.128s\n");
  _paniclog_append_noflush("secure boot?: %s\n");
  _paniclog_append_noflush("Paniclog version: %d\n");
  if (_vm_kernel_slide != 0) {
    _paniclog_append_noflush("Kernel slide:     0x%016lx\n");
    _paniclog_append_noflush("Kernel text base: %p\n");
  }
  _panic_display_times();
  _panic_display_zprint();
  if (_ecc_correction_count != 0) {
    _paniclog_append_noflush("ECC Corrections:%u\n");
  }
  iVar9 = _strncmp(pcVar12,"WDT timeout",0xb);
  if (iVar9 == 0) {
    local_68 = (undefined **)0x0;
    ppuStack112 = (undefined **)0x0;
    local_78 = (undefined **)0x0;
    ppuStack128 = (undefined **)0x0;
    local_88 = (undefined **)0x0;
    local_88._4_4_ = 0;
    if (_threads != (undefined *)0x0) {
      ppuVar21 = (undefined **)_threads;
      do {
        while( true ) {
          local_88 = (undefined **)((ulonglong)local_88 & 0xffffffff00000000);
          uVar26 = 0x518;
          ppuVar14 = ppuVar21;
          do {
            uVar13 = (ulonglong)local_88 & 0xffffffff00000000;
            local_88 = (undefined **)(uVar13 | (ulonglong)(uint)local_88);
            uVar15 = _kvtophys(ppuVar14);
            local_88 = (undefined **)(uVar13 | (ulonglong)(uint)local_88);
            local_88._4_4_ = (undefined4)(uVar13 >> 0x20);
            if ((uVar15 == 0) ||
               (uVar13 = uVar15 & 0xffffffffffffc000,
               (_vm_last_phys <= uVar13 || uVar13 <= _vm_first_phys) &&
               (_vm_last_phys <= uVar13 || _vm_first_phys != uVar13))) {
              pcVar12 = "Invalid %s pointer: %p size: %d\n";
              goto LAB_fffffff00710ac50;
            }
            uVar3 = 0x4000 - ((uint)uVar15 & 0x3fff);
            uVar27 = (uint)uVar26;
            if ((ulonglong)uVar3 <= uVar26) {
              uVar27 = uVar3;
            }
            ppuVar14 = (undefined **)((longlong)ppuVar14 + (ulonglong)uVar27);
            uVar26 = uVar26 - (ulonglong)uVar27;
          } while (uVar26 != 0);
          if (ppuVar21 == &_threads) goto LAB_fffffff00710ac54;
          if ((*(byte *)(ppuVar21 + 0x14) >> 2 & 1) != 0) break;
LAB_fffffff00710abe0:
          ppuVar21 = (undefined **)ppuVar21[0x69];
          if (ppuVar21 == (undefined **)0x0) goto LAB_fffffff00710ac3c;
        }
        if (local_88 == (undefined **)0x0) {
          ppuVar14 = ppuVar21;
          pppuVar16 = (undefined ***)&local_88;
LAB_fffffff00710abdc:
          *pppuVar16 = ppuVar14;
          goto LAB_fffffff00710abe0;
        }
        ppuVar14 = ppuVar21;
        if (*(short *)((longlong)local_88 + 0xbc) < *(short *)((longlong)ppuVar21 + 0xbc)) {
          ppuVar14 = local_88;
          local_88 = ppuVar21;
        }
        pppuVar16 = &ppuStack128;
        if (ppuStack128 == (undefined **)0x0) goto LAB_fffffff00710abdc;
        ppuVar8 = ppuVar14;
        if (*(short *)((longlong)ppuStack128 + 0xbc) < *(short *)((longlong)ppuVar14 + 0xbc)) {
          ppuVar8 = ppuStack128;
          ppuStack128 = ppuVar14;
        }
        ppuVar14 = ppuVar8;
        pppuVar16 = &local_78;
        if (local_78 == (undefined **)0x0) goto LAB_fffffff00710abdc;
        ppuVar8 = ppuVar14;
        if (*(short *)((longlong)local_78 + 0xbc) < *(short *)((longlong)ppuVar14 + 0xbc)) {
          ppuVar8 = local_78;
          local_78 = ppuVar14;
        }
        ppuVar14 = ppuVar8;
        pppuVar16 = &ppuStack112;
        if (ppuStack112 == (undefined **)0x0) goto LAB_fffffff00710abdc;
        ppuVar8 = ppuVar14;
        if (*(short *)((longlong)ppuStack112 + 0xbc) < *(short *)((longlong)ppuVar14 + 0xbc)) {
          ppuVar8 = ppuStack112;
          ppuStack112 = ppuVar14;
        }
        ppuVar14 = ppuVar8;
        pppuVar16 = &local_68;
        if (local_68 == (undefined **)0x0) goto LAB_fffffff00710abdc;
        if (*(short *)((longlong)ppuVar14 + 0xbc) <= *(short *)((longlong)local_68 + 0xbc))
        goto LAB_fffffff00710abe0;
        ppuVar21 = (undefined **)ppuVar21[0x69];
      } while (ppuVar21 != (undefined **)0x0);
    }
LAB_fffffff00710ac3c:
    pcVar12 = "NULL %s pointer\n";
LAB_fffffff00710ac50:
    ppuVar21 = local_88;
    local_88 = (undefined **)((ulonglong)local_88 & 0xffffffff00000000 | (ulonglong)(uint)local_88);
    _paniclog_append_noflush(pcVar12);
    local_88._4_4_ = (undefined4)((ulonglong)ppuVar21 >> 0x20);
LAB_fffffff00710ac54:
    uVar5 = local_88._4_4_;
    _paniclog_append_noflush("Total cpu_usage: %d\n");
    _paniclog_append_noflush("Thread task pri cpu_usage\n");
    lVar11 = 0;
LAB_fffffff00710acb8:
    lVar24 = (&local_88)[lVar11];
    if (lVar24 != 0) {
      lVar19 = *(longlong *)(lVar24 + 0x368);
      if (lVar19 == 0) {
LAB_fffffff00710adc0:
        pcVar12 = "NULL %s pointer\n";
      }
      else {
        uVar26 = 0x590;
        do {
          local_88 = (undefined **)CONCAT44(uVar5,(uint)local_88);
          uVar13 = _kvtophys(lVar19);
          if ((uVar13 == 0) ||
             (uVar15 = uVar13 & 0xffffffffffffc000,
             (_vm_last_phys <= uVar15 || uVar15 <= _vm_first_phys) &&
             (_vm_last_phys <= uVar15 || _vm_first_phys != uVar15))) goto LAB_fffffff00710adac;
          uVar3 = 0x4000 - ((uint)uVar13 & 0x3fff);
          uVar27 = (uint)uVar26;
          if ((ulonglong)uVar3 <= uVar26) {
            uVar27 = uVar3;
          }
          lVar19 = lVar19 + (ulonglong)uVar27;
          uVar26 = uVar26 - (ulonglong)uVar27;
        } while (uVar26 != 0);
        lVar19 = *(longlong *)(*(longlong *)(lVar24 + 0x368) + 0x358);
        if (lVar19 == 0) goto LAB_fffffff00710adc0;
        uVar26 = 1;
        do {
          local_88 = (undefined **)CONCAT44(uVar5,(uint)local_88);
          uVar13 = _kvtophys(lVar19);
          if ((uVar13 == 0) ||
             (uVar15 = uVar13 & 0xffffffffffffc000,
             (_vm_last_phys <= uVar15 || uVar15 <= _vm_first_phys) &&
             (_vm_last_phys <= uVar15 || _vm_first_phys != uVar15))) goto LAB_fffffff00710adac;
          uVar3 = 0x4000 - ((uint)uVar13 & 0x3fff);
          uVar27 = (uint)uVar26;
          if ((ulonglong)uVar3 <= uVar26) {
            uVar27 = uVar3;
          }
          lVar19 = lVar19 + (ulonglong)uVar27;
          uVar26 = uVar26 - (ulonglong)uVar27;
        } while (uVar26 != 0);
        lVar24 = *(longlong *)(*(longlong *)(lVar24 + 0x368) + 0x358);
        if (lVar24 != 0) {
          local_88._4_4_ = uVar5;
          _strlcpy(acStack153,(char *)(lVar24 + 0x250),0x11);
        }
        pcVar12 = "%p %s %d %d\n";
      }
      goto LAB_fffffff00710adc8;
    }
    goto LAB_fffffff00710adcc;
  }
joined_r0xfffffff00710adec:
  if (in_tpidr_el1 != 0) {
    uVar26 = 0x518;
    puVar20 = (undefined *)0xfffffff00761c000;
    unaff_x21 = (undefined *)0xfffffff00761c000;
    lVar11 = in_tpidr_el1;
    do {
      uVar13 = _kvtophys(lVar11);
      if ((uVar13 == 0) ||
         (uVar15 = uVar13 & 0xffffffffffffc000,
         (_vm_last_phys <= uVar15 || uVar15 <= _vm_first_phys) &&
         (_vm_last_phys <= uVar15 || _vm_first_phys != uVar15))) goto LAB_fffffff00710aa54;
      uVar3 = 0x4000 - ((uint)uVar13 & 0x3fff);
      uVar27 = (uint)uVar26;
      if ((ulonglong)uVar3 <= uVar26) {
        uVar27 = uVar3;
      }
      lVar11 = lVar11 + (ulonglong)uVar27;
      uVar26 = uVar26 - (ulonglong)uVar27;
    } while (uVar26 != 0);
    lVar11 = *(longlong *)(in_tpidr_el1 + 0x368);
    if (lVar11 != 0) {
      uVar26 = 0x590;
      while( true ) {
        uVar13 = _kvtophys(lVar11);
        if ((uVar13 == 0) ||
           (uVar15 = uVar13 & 0xffffffffffffc000,
           (_vm_last_phys <= uVar15 || uVar15 <= _vm_first_phys) &&
           (_vm_last_phys <= uVar15 || _vm_first_phys != uVar15))) break;
        uVar3 = 0x4000 - ((uint)uVar13 & 0x3fff);
        uVar27 = (uint)uVar26;
        if ((ulonglong)uVar3 <= uVar26) {
          uVar27 = uVar3;
        }
        lVar11 = lVar11 + (ulonglong)uVar27;
        uVar26 = uVar26 - (ulonglong)uVar27;
        if (uVar26 == 0) {
          unaff_x22 = *(undefined **)(in_tpidr_el1 + 0x368);
          lVar11 = *(longlong *)(unaff_x22 + 0x20);
          if (lVar11 != 0) {
            uVar26 = 0x118;
            do {
              uVar13 = _kvtophys(lVar11);
              local_b0 = lVar23;
              local_a8 = puVar22;
              if (uVar13 == 0) goto LAB_fffffff00710b30c;
              uVar15 = uVar13 & 0xffffffffffffc000;
              local_b0 = lVar23;
              local_a8 = puVar22;
              if ((_vm_last_phys <= uVar15 || uVar15 <= _vm_first_phys) &&
                  (_vm_last_phys <= uVar15 || _vm_first_phys != uVar15)) goto LAB_fffffff00710b30c;
              uVar3 = 0x4000 - ((uint)uVar13 & 0x3fff);
              uVar27 = (uint)uVar26;
              if ((ulonglong)uVar3 <= uVar26) {
                uVar27 = uVar3;
              }
              lVar11 = lVar11 + (ulonglong)uVar27;
              uVar26 = uVar26 - (ulonglong)uVar27;
            } while (uVar26 != 0);
            lVar11 = *(longlong *)(*(longlong *)(unaff_x22 + 0x20) + 0x48);
            if (lVar11 != 0) {
              uVar26 = 0x100;
              do {
                uVar13 = _kvtophys(lVar11);
                local_b0 = lVar23;
                local_a8 = puVar22;
                if (uVar13 == 0) goto LAB_fffffff00710b30c;
                uVar15 = uVar13 & 0xffffffffffffc000;
                local_b0 = lVar23;
                local_a8 = puVar22;
                if ((_vm_last_phys <= uVar15 || uVar15 <= _vm_first_phys) &&
                    (_vm_last_phys <= uVar15 || _vm_first_phys != uVar15))
                goto LAB_fffffff00710b30c;
                uVar3 = 0x4000 - ((uint)uVar13 & 0x3fff);
                uVar27 = (uint)uVar26;
                if ((ulonglong)uVar3 <= uVar26) {
                  uVar27 = uVar3;
                }
                lVar11 = lVar11 + (ulonglong)uVar27;
                uVar26 = uVar26 - (ulonglong)uVar27;
              } while (uVar26 != 0);
              pcVar12 = "Panicked task %p: %d pages, %d threads: ";
              local_b0 = lVar23;
              local_a8 = puVar22;
              goto LAB_fffffff00710b348;
            }
          }
          pcVar12 = "NULL %s pointer\n";
          local_b0 = lVar23;
          local_a8 = puVar22;
          goto LAB_fffffff00710b334;
        }
      }
LAB_fffffff00710aa54:
      pcVar12 = "Invalid %s pointer: %p size: %d\n";
      local_b0 = lVar23;
      local_a8 = puVar22;
      uVar5 = local_88._4_4_;
      goto LAB_fffffff00710ae04;
    }
  }
  pcVar12 = "NULL %s pointer\n";
  local_b0 = lVar23;
  local_a8 = puVar22;
  uVar5 = local_88._4_4_;
LAB_fffffff00710ae04:
  do {
    local_88 = (undefined **)CONCAT44(uVar5,(uint)local_88);
    _paniclog_append_noflush(pcVar12);
    if (puVar22 < (undefined *)0xfffffff3ffffffff) {
      local_88._4_4_ = uVar5;
      _paniclog_append_noflush("Panicked thread: %p, backtrace: 0x%llx, tid: %llu\n");
      puVar20 = _kernel_pmap;
      puVar28 = puVar22;
      if (puVar22 != (undefined *)0x0) {
        uVar27 = 0;
        puVar25 = (undefined *)0x0;
        uVar26 = 0;
        puVar28 = puVar22;
        while (((ulonglong)puVar22 & 3) == 0) {
          bVar1 = 4 < (ulonglong)(puVar22 + 0x2000000000) >> 0x22;
          if (puVar28 < (undefined *)0xffffffe000000000) {
            bVar1 = (undefined *)0xffffffdfffffffff < puVar22;
          }
          if (bVar1) break;
          if (0x3fff < ((ulonglong)(puVar22 + 4) ^ (ulonglong)puVar25)) {
            local_88._4_4_ = uVar5;
            uVar26 = _pmap_find_phys(puVar20);
            puVar25 = puVar22 + 8;
          }
          if ((int)uVar26 == 0) {
            pcVar12 = "%s\t  Could not read LR from frame at 0x%016llx\n";
            puVar22 = puVar28;
            goto LAB_fffffff00710af9c;
          }
          puVar28 = (undefined *)(uVar26 & 0xffffffff);
          local_88._4_4_ = uVar5;
          lVar23 = _ml_phys_read_data((ulonglong)((int)puVar22 + 8) & 0x3fff |
                                      (longlong)puVar28 << 0xe,8);
          if (((ulonglong)puVar25 ^ (ulonglong)puVar22) >> 0xe != 0) {
            local_88._4_4_ = uVar5;
            uVar26 = _pmap_find_phys(puVar20,puVar22);
            if ((int)uVar26 == 0) {
              pcVar12 = "%s\t  Could not read FP from frame at 0x%016llx\n";
              puVar22 = puVar28;
              goto LAB_fffffff00710af9c;
            }
            puVar28 = (undefined *)(uVar26 & 0xffffffff);
            puVar25 = puVar22;
          }
          local_88 = (undefined **)CONCAT44(uVar5,(uint)local_88);
          puVar22 = (undefined *)
                    _ml_phys_read_data((longlong)puVar28 << 0xe | (ulonglong)puVar22 & 0x3fff,8);
          local_88 = (undefined **)CONCAT44(uVar5,(uint)local_88);
          if (lVar23 != 0) {
            _paniclog_append_noflush("%s\t  lr: 0x%016llx  fp: 0x%016llx\n");
          }
          uVar27 = uVar27 + 1;
          puVar28 = local_a8;
          if (((0x31 < uVar27) || (puVar28 = local_a8, puVar22 == local_a8)) ||
             (puVar28 = local_a8, puVar22 == (undefined *)0x0)) break;
        }
      }
    }
    else {
      pcVar12 = "Could not print panicked thread backtrace:frame pointer outside kernel vm.\n";
LAB_fffffff00710af9c:
      local_88 = (undefined **)CONCAT44(uVar5,(uint)local_88);
      _paniclog_append_noflush(pcVar12);
      puVar28 = puVar22;
    }
    local_88 = (undefined **)CONCAT44(uVar5,(uint)local_88);
    _paniclog_append_noflush("\n");
    puVar7 = _panic_info;
    pvVar6 = _debug_buf_ptr;
    unaff_x22 = &DAT_fffffff007644000;
    iVar9 = (int)_debug_buf_ptr - (int)_gPanicBase;
    _panic_info[6] = iVar9 - _panic_info[5];
    if (_debug_ack_timeout_count == 0) {
      if (_stackshot_kcdata_p == 0) {
        pvVar6 = (void *)((longlong)pvVar6 + (8 - ((ulonglong)pvVar6 & 7)));
        uVar27 = (_debug_buf_size - ((int)pvVar6 - (int)_debug_buf_base)) - 200;
        local_88 = (undefined **)0x0;
        local_88._4_4_ = 0;
        uVar5 = local_88._4_4_;
        _debug_buf_ptr = pvVar6;
        ___bzero(&_kc_panic_data,0x18);
        local_88 = (undefined **)(ulonglong)(uint)local_88;
        DAT_fffffff00761dab4 = 0;
        _kc_panic_data = uVar27;
        DAT_fffffff00761dab8 = pvVar6;
        DAT_fffffff00761dac0 = pvVar6;
        iVar9 = _kcdata_get_memory_addr_with_flavor(&_kc_panic_data,0x59a25807,0,0x80,&local_88);
        puVar7 = _panic_info;
        local_88._4_4_ = 0;
        if (iVar9 == 0) {
          _kdp_snapshot_preflight(0xffffffff,pvVar6,(ulonglong)uVar27,0x1e30006,&_kc_panic_data,0);
          local_88 = (undefined **)(ulonglong)(uint)local_88;
          iVar10 = _do_stackshot();
          puVar7 = _panic_info;
          iVar9 = _stack_snapshot_bytes_traced;
          local_88._4_4_ = 0;
          if ((iVar10 == 0) && (0 < _stack_snapshot_bytes_traced)) {
            pvVar2 = (void *)((longlong)_debug_buf_ptr + (longlong)_stack_snapshot_bytes_traced);
            _debug_buf_ptr = pvVar2;
            *(ulonglong *)(_panic_info + 3) = *(ulonglong *)(_panic_info + 3) | 2;
            iVar10 = (int)_gPanicBase;
            puVar7[7] = (int)pvVar6 - (int)_gPanicBase;
            puVar7[8] = iVar9;
            puVar7[9] = (int)pvVar2 - iVar10;
            pcVar12 = "\n** Stackshot Succeeded ** Bytes Traced %d **\n";
            local_88._4_4_ = uVar5;
          }
          else {
            lVar23 = (longlong)DAT_fffffff00761dac0 + (0x10 - (longlong)DAT_fffffff00761dab8);
            ___bzero(pvVar6,(size_t)lVar23);
            puVar7 = _panic_info;
            local_88._4_4_ = 0;
            if (lVar23 == 0) {
              *(ulonglong *)(_panic_info + 3) = *(ulonglong *)(_panic_info + 3) | 8;
              puVar7[9] = (int)_debug_buf_ptr - (int)_gPanicBase;
              pcVar12 = "\n!! Stackshot Failed !! Bytes Traced %d, err %d\n";
            }
            else {
              *(ulonglong *)(_panic_info + 3) = *(ulonglong *)(_panic_info + 3) | 0x10;
              puVar7[9] = (int)_debug_buf_ptr - (int)_gPanicBase;
              pcVar12 = "\n** Stackshot Incomplete ** Bytes Filled %llu **\n";
            }
          }
        }
        else {
          *(ulonglong *)(_panic_info + 3) = *(ulonglong *)(_panic_info + 3) | 8;
          puVar7[9] = (int)_debug_buf_ptr - (int)_gPanicBase;
          pcVar12 = "\n!! Stackshot Failed !!\nkcdata_memory_static_init returned %d";
        }
      }
      else {
        *(ulonglong *)(puVar7 + 3) = *(ulonglong *)(puVar7 + 3) | 0x20;
        puVar7[9] = iVar9;
        pcVar12 = "!! panicked during stackshot, skipping panic stackshot !!\n";
        local_88._4_4_ = uVar5;
      }
    }
    else {
      *(ulonglong *)(puVar7 + 3) = *(ulonglong *)(puVar7 + 3) | 4;
      puVar7[9] = iVar9;
      pcVar12 = "!! debugger synchronization failed, no stackshot !!\n";
      local_88._4_4_ = uVar5;
    }
    _paniclog_append_noflush(pcVar12);
    _panic_bt_depth = _panic_bt_depth + -1;
    lVar23 = local_b0;
    puVar22 = puVar28;
    local_b4 = uVar17;
LAB_fffffff00710b234:
    uVar5 = local_88._4_4_;
    _not_in_kdp = uVar17;
    *(undefined4 *)(lVar23 + 0x238) = 0;
    unaff_x21 = &DAT_fffffff0075d8000;
    puVar20 = &DAT_fffffff007644000;
    _panic_info[10] = ((int)_debug_buf_ptr - (int)_gPanicBase) - _panic_info[9];
    _PEHaltRestart(5);
    uVar4 = CONCAT44(_gPanicBase._4_4_,(int)_gPanicBase);
    _debug_buf_ptr._0_4_ = (int)_debug_buf_ptr - (int)_gPanicBase;
    unaff_x26 = puVar22;
    local_88._4_4_ = uVar5;
    if ((int)_debug_buf_ptr != 0) {
      _panic_info[10] = (int)_debug_buf_ptr - _panic_info[9];
      uVar27 = (uint)local_88;
      local_88._0_4_ = (int)_debug_buf_ptr;
      _PE_save_buffer_to_vram(uVar4,&local_88);
      local_88 = (undefined **)CONCAT44(uVar5,(uint)local_88);
      if (__ZL11gIOPlatform_19012 != (longlong *)0x0) {
        (**(code **)(*__ZL11gIOPlatform_19012 + 0x640))
                  (__ZL11gIOPlatform_19012,CONCAT44(_gPanicBase._4_4_,(int)_gPanicBase),
                   (ulonglong)(uint)local_88);
      }
      unaff_x26 = puVar22;
      local_88._4_4_ = uVar5;
      if (CONCAT44(_gPanicBase._4_4_,(int)_gPanicBase) != 0) {
        local_88._4_4_ = uVar5;
        _CleanPoC_DcacheRegion_Force
                  (CONCAT44(_gPanicBase._4_4_,(int)_gPanicBase),(ulonglong)_gPanicSize);
        unaff_x26 = puVar22;
        local_88._4_4_ = uVar5;
      }
    }
LAB_fffffff00710b2cc:
    uVar17 = local_b4;
    puVar22 = unaff_x26;
    if (((byte)_debugger_panic_options & 1) != 0) {
      _PEHaltRestart(4);
    }
    if ((_panicDebugging & 1) != 0) {
      _panic_spin_forever();
    }
    _PEHaltRestart(4);
    _halt_all_cpus(1);
LAB_fffffff00710b30c:
    pcVar12 = "Invalid %s pointer: %p size: %d\n";
LAB_fffffff00710b334:
    _paniclog_append_noflush(pcVar12);
    pcVar12 = "Panicked task %p: %d threads: ";
LAB_fffffff00710b348:
    uVar5 = local_88._4_4_;
    _paniclog_append_noflush(pcVar12);
    lVar23 = *(longlong *)(unaff_x22 + 0x358);
    if (lVar23 == 0) {
      pcVar12 = "NULL %s pointer\n";
LAB_fffffff00710b3f4:
      _paniclog_append_noflush(pcVar12);
      pcVar12 = "unknown task";
    }
    else {
      uVar26 = 1;
      do {
        uVar13 = _kvtophys(lVar23);
        if ((uVar13 == 0) ||
           (uVar15 = uVar13 & 0xffffffffffffc000,
           (*(ulonglong *)(unaff_x21 + 0x8f8) <= uVar15 || uVar15 <= *(ulonglong *)(puVar20 + 0x8f0)
           ) && (*(ulonglong *)(unaff_x21 + 0x8f8) <= uVar15 ||
                *(ulonglong *)(puVar20 + 0x8f0) != uVar15))) {
          pcVar12 = "Invalid %s pointer: %p size: %d\n";
          goto LAB_fffffff00710b3f4;
        }
        uVar3 = 0x4000 - ((uint)uVar13 & 0x3fff);
        uVar27 = (uint)uVar26;
        if ((ulonglong)uVar3 <= uVar26) {
          uVar27 = uVar3;
        }
        lVar23 = lVar23 + (ulonglong)uVar27;
        uVar26 = uVar26 - (ulonglong)uVar27;
      } while (uVar26 != 0);
      if (*(longlong *)(unaff_x22 + 0x358) != 0) {
        _strlcpy((char *)&local_88,(char *)(*(longlong *)(unaff_x22 + 0x358) + 0x250),0x11);
      }
      pcVar12 = "pid %d: %s";
    }
    local_88 = (undefined **)CONCAT44(uVar5,(uint)local_88);
    _paniclog_append_noflush(pcVar12);
    pcVar12 = "\n";
  } while( true );
LAB_fffffff00710adac:
  pcVar12 = "Invalid %s pointer: %p size: %d\n";
LAB_fffffff00710adc8:
  local_88 = (undefined **)CONCAT44(uVar5,(uint)local_88);
  _paniclog_append_noflush(pcVar12);
LAB_fffffff00710adcc:
  lVar11 = lVar11 + 1;
  if (lVar11 == 5) goto code_r0xfffffff00710add8;
  goto LAB_fffffff00710acb8;
code_r0xfffffff00710add8:
  local_88._4_4_ = uVar5;
  _paniclog_append_noflush("\n");
  local_88._4_4_ = uVar5;
  goto joined_r0xfffffff00710adec;
}

