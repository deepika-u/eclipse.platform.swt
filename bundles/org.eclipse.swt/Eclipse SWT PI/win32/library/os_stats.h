/*******************************************************************************
* Copyright (c) 2000, 2003 IBM Corporation and others.
* All rights reserved. This program and the accompanying materials
* are made available under the terms of the Common Public License v1.0
* which accompanies this distribution, and is available at
* http://www.eclipse.org/legal/cpl-v10.html
* 
* Contributors:
*     IBM Corporation - initial API and implementation
*******************************************************************************/

#ifdef NATIVE_STATS
int OS_nativeFunctionCallCount[];
char* OS_nativeFunctionNames[];
#define OS_NATIVE_ENTER(env, that, func) OS_nativeFunctionCallCount[func]++;
#define OS_NATIVE_EXIT(env, that, func) 
#else
#define OS_NATIVE_ENTER(env, that, func) 
#define OS_NATIVE_EXIT(env, that, func) 
#endif

#define AbortDoc_FUNC 0
#define ActivateKeyboardLayout_FUNC 1
#define AdjustWindowRectEx_FUNC 2
#define Arc_FUNC 3
#define BeginDeferWindowPos_FUNC 4
#define BeginPaint_FUNC 5
#define BitBlt_FUNC 6
#define BringWindowToTop_FUNC 7
#define Call_FUNC 8
#define CallNextHookEx_FUNC 9
#define CallWindowProcA_FUNC 10
#define CallWindowProcW_FUNC 11
#define CharLowerA_FUNC 12
#define CharLowerW_FUNC 13
#define CharUpperA_FUNC 14
#define CharUpperW_FUNC 15
#define CheckMenuItem_FUNC 16
#define ChooseColorA_FUNC 17
#define ChooseColorW_FUNC 18
#define ChooseFontA_FUNC 19
#define ChooseFontW_FUNC 20
#define ClientToScreen_FUNC 21
#define CloseClipboard_FUNC 22
#define CombineRgn_FUNC 23
#define CommDlgExtendedError_FUNC 24
#define CommandBar_1AddAdornments_FUNC 25
#define CommandBar_1Create_FUNC 26
#define CommandBar_1Destroy_FUNC 27
#define CommandBar_1DrawMenuBar_FUNC 28
#define CommandBar_1Height_FUNC 29
#define CommandBar_1InsertMenubarEx_FUNC 30
#define CommandBar_1Show_FUNC 31
#define CopyImage_FUNC 32
#define CreateAcceleratorTableA_FUNC 33
#define CreateAcceleratorTableW_FUNC 34
#define CreateBitmap_FUNC 35
#define CreateCaret_FUNC 36
#define CreateCompatibleBitmap_FUNC 37
#define CreateCompatibleDC_FUNC 38
#define CreateCursor_FUNC 39
#define CreateDCA_FUNC 40
#define CreateDCW_FUNC 41
#define CreateDIBSection_FUNC 42
#define CreateFontIndirectA__I_FUNC 43
#define CreateFontIndirectA__Lorg_eclipse_swt_internal_win32_LOGFONTA_2_FUNC 44
#define CreateFontIndirectW__I_FUNC 45
#define CreateFontIndirectW__Lorg_eclipse_swt_internal_win32_LOGFONTW_2_FUNC 46
#define CreateIconIndirect_FUNC 47
#define CreateMenu_FUNC 48
#define CreatePalette_FUNC 49
#define CreatePatternBrush_FUNC 50
#define CreatePen_FUNC 51
#define CreatePolygonRgn_FUNC 52
#define CreatePopupMenu_FUNC 53
#define CreateRectRgn_FUNC 54
#define CreateSolidBrush_FUNC 55
#define CreateStreamOnHGlobal_FUNC 56
#define CreateWindowExA_FUNC 57
#define CreateWindowExW_FUNC 58
#define DefFrameProcA_FUNC 59
#define DefFrameProcW_FUNC 60
#define DefMDIChildProcA_FUNC 61
#define DefMDIChildProcW_FUNC 62
#define DefWindowProcA_FUNC 63
#define DefWindowProcW_FUNC 64
#define DeferWindowPos_FUNC 65
#define DeleteDC_FUNC 66
#define DeleteMenu_FUNC 67
#define DeleteObject_FUNC 68
#define DestroyAcceleratorTable_FUNC 69
#define DestroyCaret_FUNC 70
#define DestroyCursor_FUNC 71
#define DestroyIcon_FUNC 72
#define DestroyMenu_FUNC 73
#define DestroyWindow_FUNC 74
#define DispatchMessageA_FUNC 75
#define DispatchMessageW_FUNC 76
#define DragDetect_FUNC 77
#define DragFinish_FUNC 78
#define DragQueryFileA_FUNC 79
#define DragQueryFileW_FUNC 80
#define DrawEdge_FUNC 81
#define DrawFocusRect_FUNC 82
#define DrawFrameControl_FUNC 83
#define DrawIconEx_FUNC 84
#define DrawMenuBar_FUNC 85
#define DrawStateA_FUNC 86
#define DrawStateW_FUNC 87
#define DrawTextA_FUNC 88
#define DrawTextW_FUNC 89
#define Ellipse_FUNC 90
#define EnableMenuItem_FUNC 91
#define EnableScrollBar_FUNC 92
#define EnableWindow_FUNC 93
#define EndDeferWindowPos_FUNC 94
#define EndDoc_FUNC 95
#define EndPage_FUNC 96
#define EndPaint_FUNC 97
#define EnumDisplayMonitors_FUNC 98
#define EnumFontFamiliesA_FUNC 99
#define EnumFontFamiliesExA_FUNC 100
#define EnumFontFamiliesExW_FUNC 101
#define EnumFontFamiliesW_FUNC 102
#define EnumSystemLanguageGroupsA_FUNC 103
#define EnumSystemLanguageGroupsW_FUNC 104
#define EnumSystemLocalesA_FUNC 105
#define EnumSystemLocalesW_FUNC 106
#define EqualRect_FUNC 107
#define EqualRgn_FUNC 108
#define ExpandEnvironmentStringsA_FUNC 109
#define ExpandEnvironmentStringsW_FUNC 110
#define ExtTextOutA_FUNC 111
#define ExtTextOutW_FUNC 112
#define ExtractIconExA_FUNC 113
#define ExtractIconExW_FUNC 114
#define FillRect_FUNC 115
#define FindWindowA_FUNC 116
#define FindWindowW_FUNC 117
#define FormatMessageA_FUNC 118
#define FormatMessageW_FUNC 119
#define FreeLibrary_FUNC 120
#define GdiSetBatchLimit_FUNC 121
#define GetACP_FUNC 122
#define GetActiveWindow_FUNC 123
#define GetBkColor_FUNC 124
#define GetCapture_FUNC 125
#define GetCaretPos_FUNC 126
#define GetCharABCWidthsA_FUNC 127
#define GetCharABCWidthsW_FUNC 128
#define GetCharWidthA_FUNC 129
#define GetCharWidthW_FUNC 130
#define GetCharacterPlacementA_FUNC 131
#define GetCharacterPlacementW_FUNC 132
#define GetClassInfoA_FUNC 133
#define GetClassInfoW_FUNC 134
#define GetClientRect_FUNC 135
#define GetClipBox_FUNC 136
#define GetClipRgn_FUNC 137
#define GetClipboardData_FUNC 138
#define GetClipboardFormatNameA_FUNC 139
#define GetClipboardFormatNameW_FUNC 140
#define GetComboBoxInfo_FUNC 141
#define GetCurrentObject_FUNC 142
#define GetCurrentProcessId_FUNC 143
#define GetCurrentThreadId_FUNC 144
#define GetCursor_FUNC 145
#define GetCursorPos_FUNC 146
#define GetDC_FUNC 147
#define GetDCEx_FUNC 148
#define GetDIBColorTable_FUNC 149
#define GetDIBits_FUNC 150
#define GetDesktopWindow_FUNC 151
#define GetDeviceCaps_FUNC 152
#define GetDialogBaseUnits_FUNC 153
#define GetDlgItem_FUNC 154
#define GetDoubleClickTime_FUNC 155
#define GetFocus_FUNC 156
#define GetFontLanguageInfo_FUNC 157
#define GetIconInfo_FUNC 158
#define GetKeyNameTextA_FUNC 159
#define GetKeyNameTextW_FUNC 160
#define GetKeyState_FUNC 161
#define GetKeyboardLayout_FUNC 162
#define GetKeyboardLayoutList_FUNC 163
#define GetKeyboardState_FUNC 164
#define GetLastActivePopup_FUNC 165
#define GetLastError_FUNC 166
#define GetLayout_FUNC 167
#define GetLibraryHandle_FUNC 168
#define GetLocaleInfoA_FUNC 169
#define GetLocaleInfoW_FUNC 170
#define GetMenu_FUNC 171
#define GetMenuBarInfo_FUNC 172
#define GetMenuDefaultItem_FUNC 173
#define GetMenuInfo_FUNC 174
#define GetMenuItemCount_FUNC 175
#define GetMenuItemInfoA_FUNC 176
#define GetMenuItemInfoW_FUNC 177
#define GetMenuItemRect_FUNC 178
#define GetMessageA_FUNC 179
#define GetMessagePos_FUNC 180
#define GetMessageTime_FUNC 181
#define GetMessageW_FUNC 182
#define GetModuleHandleA_FUNC 183
#define GetModuleHandleW_FUNC 184
#define GetMonitorInfoA_FUNC 185
#define GetMonitorInfoW_FUNC 186
#define GetNearestPaletteIndex_FUNC 187
#define GetObjectA__IILorg_eclipse_swt_internal_win32_BITMAP_2_FUNC 188
#define GetObjectA__IILorg_eclipse_swt_internal_win32_DIBSECTION_2_FUNC 189
#define GetObjectA__IILorg_eclipse_swt_internal_win32_LOGBRUSH_2_FUNC 190
#define GetObjectA__IILorg_eclipse_swt_internal_win32_LOGFONTA_2_FUNC 191
#define GetObjectA__IILorg_eclipse_swt_internal_win32_LOGPEN_2_FUNC 192
#define GetObjectW__IILorg_eclipse_swt_internal_win32_BITMAP_2_FUNC 193
#define GetObjectW__IILorg_eclipse_swt_internal_win32_DIBSECTION_2_FUNC 194
#define GetObjectW__IILorg_eclipse_swt_internal_win32_LOGBRUSH_2_FUNC 195
#define GetObjectW__IILorg_eclipse_swt_internal_win32_LOGFONTW_2_FUNC 196
#define GetObjectW__IILorg_eclipse_swt_internal_win32_LOGPEN_2_FUNC 197
#define GetOpenFileNameA_FUNC 198
#define GetOpenFileNameW_FUNC 199
#define GetPaletteEntries_FUNC 200
#define GetParent_FUNC 201
#define GetPixel_FUNC 202
#define GetProcAddress_FUNC 203
#define GetProcessHeap_FUNC 204
#define GetProfileStringA_FUNC 205
#define GetProfileStringW_FUNC 206
#define GetROP2_FUNC 207
#define GetRandomRgn_FUNC 208
#define GetRegionData_FUNC 209
#define GetRgnBox_FUNC 210
#define GetSaveFileNameA_FUNC 211
#define GetSaveFileNameW_FUNC 212
#define GetScrollInfo_FUNC 213
#define GetStockObject_FUNC 214
#define GetSysColor_FUNC 215
#define GetSysColorBrush_FUNC 216
#define GetSystemMenu_FUNC 217
#define GetSystemMetrics_FUNC 218
#define GetSystemPaletteEntries_FUNC 219
#define GetTextCharset_FUNC 220
#define GetTextColor_FUNC 221
#define GetTextExtentPoint32A_FUNC 222
#define GetTextExtentPoint32W_FUNC 223
#define GetTextMetricsA_FUNC 224
#define GetTextMetricsW_FUNC 225
#define GetTickCount_FUNC 226
#define GetUpdateRect_FUNC 227
#define GetUpdateRgn_FUNC 228
#define GetVersionExA_FUNC 229
#define GetVersionExW_FUNC 230
#define GetWindow_FUNC 231
#define GetWindowLongA_FUNC 232
#define GetWindowLongW_FUNC 233
#define GetWindowPlacement_FUNC 234
#define GetWindowRect_FUNC 235
#define GetWindowRgn_FUNC 236
#define GetWindowTextA_FUNC 237
#define GetWindowTextLengthA_FUNC 238
#define GetWindowTextLengthW_FUNC 239
#define GetWindowTextW_FUNC 240
#define GetWindowThreadProcessId_FUNC 241
#define GlobalAlloc_FUNC 242
#define GlobalFree_FUNC 243
#define GlobalLock_FUNC 244
#define GlobalSize_FUNC 245
#define GlobalUnlock_FUNC 246
#define GradientFill_FUNC 247
#define HeapAlloc_FUNC 248
#define HeapFree_FUNC 249
#define HideCaret_FUNC 250
#define ImageList_1Add_FUNC 251
#define ImageList_1AddMasked_FUNC 252
#define ImageList_1Create_FUNC 253
#define ImageList_1Destroy_FUNC 254
#define ImageList_1GetIcon_FUNC 255
#define ImageList_1GetIconSize_FUNC 256
#define ImageList_1GetImageCount_FUNC 257
#define ImageList_1Remove_FUNC 258
#define ImageList_1Replace_FUNC 259
#define ImageList_1ReplaceIcon_FUNC 260
#define ImageList_1SetIconSize_FUNC 261
#define ImmAssociateContext_FUNC 262
#define ImmCreateContext_FUNC 263
#define ImmDestroyContext_FUNC 264
#define ImmGetCompositionFontA_FUNC 265
#define ImmGetCompositionFontW_FUNC 266
#define ImmGetCompositionStringA_FUNC 267
#define ImmGetCompositionStringW_FUNC 268
#define ImmGetContext_FUNC 269
#define ImmGetConversionStatus_FUNC 270
#define ImmGetDefaultIMEWnd_FUNC 271
#define ImmGetOpenStatus_FUNC 272
#define ImmReleaseContext_FUNC 273
#define ImmSetCompositionFontA_FUNC 274
#define ImmSetCompositionFontW_FUNC 275
#define ImmSetCompositionWindow_FUNC 276
#define ImmSetConversionStatus_FUNC 277
#define ImmSetOpenStatus_FUNC 278
#define InitCommonControls_FUNC 279
#define InitCommonControlsEx_FUNC 280
#define InsertMenuA_FUNC 281
#define InsertMenuItemA_FUNC 282
#define InsertMenuItemW_FUNC 283
#define InsertMenuW_FUNC 284
#define IntersectRect_FUNC 285
#define InvalidateRect_FUNC 286
#define InvalidateRgn_FUNC 287
#define IsDBCSLeadByte_FUNC 288
#define IsIconic_FUNC 289
#define IsPPC_FUNC 290
#define IsSP_FUNC 291
#define IsWindowEnabled_FUNC 292
#define IsWindowVisible_FUNC 293
#define IsZoomed_FUNC 294
#define KillTimer_FUNC 295
#define LineTo_FUNC 296
#define LoadBitmapA_FUNC 297
#define LoadBitmapW_FUNC 298
#define LoadCursorA_FUNC 299
#define LoadCursorW_FUNC 300
#define LoadIconA_FUNC 301
#define LoadIconW_FUNC 302
#define LoadImageA__IIIIII_FUNC 303
#define LoadImageA__I_3BIIII_FUNC 304
#define LoadImageW__IIIIII_FUNC 305
#define LoadImageW__I_3CIIII_FUNC 306
#define LoadLibraryA_FUNC 307
#define LoadLibraryW_FUNC 308
#define LoadStringA_FUNC 309
#define LoadStringW_FUNC 310
#define LocalFree_FUNC 311
#define MapVirtualKeyA_FUNC 312
#define MapVirtualKeyW_FUNC 313
#define MapWindowPoints__IILorg_eclipse_swt_internal_win32_POINT_2I_FUNC 314
#define MapWindowPoints__IILorg_eclipse_swt_internal_win32_RECT_2I_FUNC 315
#define MessageBeep_FUNC 316
#define MessageBoxA_FUNC 317
#define MessageBoxW_FUNC 318
#define MonitorFromWindow_FUNC 319
#define MoveMemory__ILorg_eclipse_swt_internal_win32_DROPFILES_2I_FUNC 320
#define MoveMemory__ILorg_eclipse_swt_internal_win32_GRADIENT_1RECT_2I_FUNC 321
#define MoveMemory__ILorg_eclipse_swt_internal_win32_KEYBDINPUT_2I_FUNC 322
#define MoveMemory__ILorg_eclipse_swt_internal_win32_LOGFONTA_2I_FUNC 323
#define MoveMemory__ILorg_eclipse_swt_internal_win32_LOGFONTW_2I_FUNC 324
#define MoveMemory__ILorg_eclipse_swt_internal_win32_MEASUREITEMSTRUCT_2I_FUNC 325
#define MoveMemory__ILorg_eclipse_swt_internal_win32_MOUSEINPUT_2I_FUNC 326
#define MoveMemory__ILorg_eclipse_swt_internal_win32_MSG_2I_FUNC 327
#define MoveMemory__ILorg_eclipse_swt_internal_win32_NMLVCUSTOMDRAW_2I_FUNC 328
#define MoveMemory__ILorg_eclipse_swt_internal_win32_NMLVDISPINFO_2I_FUNC 329
#define MoveMemory__ILorg_eclipse_swt_internal_win32_NMTTDISPINFOA_2I_FUNC 330
#define MoveMemory__ILorg_eclipse_swt_internal_win32_NMTTDISPINFOW_2I_FUNC 331
#define MoveMemory__ILorg_eclipse_swt_internal_win32_NMTVCUSTOMDRAW_2I_FUNC 332
#define MoveMemory__ILorg_eclipse_swt_internal_win32_RECT_2I_FUNC 333
#define MoveMemory__ILorg_eclipse_swt_internal_win32_TRIVERTEX_2I_FUNC 334
#define MoveMemory__ILorg_eclipse_swt_internal_win32_WINDOWPOS_2I_FUNC 335
#define MoveMemory__I_3BI_FUNC 336
#define MoveMemory__I_3CI_FUNC 337
#define MoveMemory__I_3DI_FUNC 338
#define MoveMemory__I_3FI_FUNC 339
#define MoveMemory__I_3II_FUNC 340
#define MoveMemory__I_3SI_FUNC 341
#define MoveMemory__Lorg_eclipse_swt_internal_win32_BITMAPINFOHEADER_2_3BI_FUNC 342
#define MoveMemory__Lorg_eclipse_swt_internal_win32_DRAWITEMSTRUCT_2II_FUNC 343
#define MoveMemory__Lorg_eclipse_swt_internal_win32_HDITEM_2II_FUNC 344
#define MoveMemory__Lorg_eclipse_swt_internal_win32_HELPINFO_2II_FUNC 345
#define MoveMemory__Lorg_eclipse_swt_internal_win32_LOGFONTA_2II_FUNC 346
#define MoveMemory__Lorg_eclipse_swt_internal_win32_LOGFONTW_2II_FUNC 347
#define MoveMemory__Lorg_eclipse_swt_internal_win32_MEASUREITEMSTRUCT_2II_FUNC 348
#define MoveMemory__Lorg_eclipse_swt_internal_win32_MSG_2II_FUNC 349
#define MoveMemory__Lorg_eclipse_swt_internal_win32_NMCUSTOMDRAW_2II_FUNC 350
#define MoveMemory__Lorg_eclipse_swt_internal_win32_NMHDR_2II_FUNC 351
#define MoveMemory__Lorg_eclipse_swt_internal_win32_NMHEADER_2II_FUNC 352
#define MoveMemory__Lorg_eclipse_swt_internal_win32_NMLISTVIEW_2II_FUNC 353
#define MoveMemory__Lorg_eclipse_swt_internal_win32_NMLVCUSTOMDRAW_2II_FUNC 354
#define MoveMemory__Lorg_eclipse_swt_internal_win32_NMLVDISPINFO_2II_FUNC 355
#define MoveMemory__Lorg_eclipse_swt_internal_win32_NMLVFINDITEM_2II_FUNC 356
#define MoveMemory__Lorg_eclipse_swt_internal_win32_NMREBARCHEVRON_2II_FUNC 357
#define MoveMemory__Lorg_eclipse_swt_internal_win32_NMRGINFO_2II_FUNC 358
#define MoveMemory__Lorg_eclipse_swt_internal_win32_NMTOOLBAR_2II_FUNC 359
#define MoveMemory__Lorg_eclipse_swt_internal_win32_NMTTDISPINFOA_2II_FUNC 360
#define MoveMemory__Lorg_eclipse_swt_internal_win32_NMTTDISPINFOW_2II_FUNC 361
#define MoveMemory__Lorg_eclipse_swt_internal_win32_NMTVCUSTOMDRAW_2II_FUNC 362
#define MoveMemory__Lorg_eclipse_swt_internal_win32_POINT_2II_FUNC 363
#define MoveMemory__Lorg_eclipse_swt_internal_win32_SCRIPT_1ITEM_2II_FUNC 364
#define MoveMemory__Lorg_eclipse_swt_internal_win32_SCRIPT_1LOGATTR_2II_FUNC 365
#define MoveMemory__Lorg_eclipse_swt_internal_win32_SCRIPT_1PROPERTIES_2II_FUNC 366
#define MoveMemory__Lorg_eclipse_swt_internal_win32_TVITEM_2II_FUNC 367
#define MoveMemory__Lorg_eclipse_swt_internal_win32_WINDOWPOS_2II_FUNC 368
#define MoveMemory___3BII_FUNC 369
#define MoveMemory___3BLorg_eclipse_swt_internal_win32_ACCEL_2I_FUNC 370
#define MoveMemory___3BLorg_eclipse_swt_internal_win32_BITMAPINFOHEADER_2I_FUNC 371
#define MoveMemory___3CII_FUNC 372
#define MoveMemory___3DII_FUNC 373
#define MoveMemory___3FII_FUNC 374
#define MoveMemory___3III_FUNC 375
#define MoveMemory___3SII_FUNC 376
#define MoveToEx_FUNC 377
#define MsgWaitForMultipleObjectsEx_FUNC 378
#define MultiByteToWideChar__IIII_3CI_FUNC 379
#define MultiByteToWideChar__II_3BI_3CI_FUNC 380
#define NotifyWinEvent_FUNC 381
#define OffsetRgn_FUNC 382
#define OleInitialize_FUNC 383
#define OleUninitialize_FUNC 384
#define OpenClipboard_FUNC 385
#define PatBlt_FUNC 386
#define PeekMessageA_FUNC 387
#define PeekMessageW_FUNC 388
#define Pie_FUNC 389
#define Polygon_FUNC 390
#define Polyline_FUNC 391
#define PostMessageA_FUNC 392
#define PostMessageW_FUNC 393
#define PostThreadMessageA_FUNC 394
#define PostThreadMessageW_FUNC 395
#define PrintDlgA_FUNC 396
#define PrintDlgW_FUNC 397
#define PtInRect_FUNC 398
#define PtInRegion_FUNC 399
#define RealizePalette_FUNC 400
#define RectInRegion_FUNC 401
#define Rectangle_FUNC 402
#define RedrawWindow_FUNC 403
#define RegCloseKey_FUNC 404
#define RegEnumKeyExA_FUNC 405
#define RegEnumKeyExW_FUNC 406
#define RegOpenKeyExA_FUNC 407
#define RegOpenKeyExW_FUNC 408
#define RegQueryInfoKeyA_FUNC 409
#define RegQueryInfoKeyW_FUNC 410
#define RegQueryValueExA_FUNC 411
#define RegQueryValueExW_FUNC 412
#define RegisterClassA_FUNC 413
#define RegisterClassW_FUNC 414
#define RegisterClipboardFormatA_FUNC 415
#define RegisterClipboardFormatW_FUNC 416
#define RegisterWindowMessageA_FUNC 417
#define RegisterWindowMessageW_FUNC 418
#define ReleaseCapture_FUNC 419
#define ReleaseDC_FUNC 420
#define RemoveMenu_FUNC 421
#define RestoreDC_FUNC 422
#define RoundRect_FUNC 423
#define SHBrowseForFolderA_FUNC 424
#define SHBrowseForFolderW_FUNC 425
#define SHCreateMenuBar_FUNC 426
#define SHGetMalloc_FUNC 427
#define SHGetPathFromIDListA_FUNC 428
#define SHGetPathFromIDListW_FUNC 429
#define SHHandleWMSettingChange_FUNC 430
#define SHRecognizeGesture_FUNC 431
#define SHSendBackToFocusWindow_FUNC 432
#define SHSetAppKeyWndAssoc_FUNC 433
#define SHSipPreference_FUNC 434
#define SaveDC_FUNC 435
#define ScreenToClient_FUNC 436
#define ScriptBreak_FUNC 437
#define ScriptCPtoX_FUNC 438
#define ScriptCacheGetHeight_FUNC 439
#define ScriptFreeCache_FUNC 440
#define ScriptGetFontProperties_FUNC 441
#define ScriptGetLogicalWidths_FUNC 442
#define ScriptGetProperties_FUNC 443
#define ScriptItemize_FUNC 444
#define ScriptLayout_FUNC 445
#define ScriptPlace_FUNC 446
#define ScriptShape_FUNC 447
#define ScriptTextOut_FUNC 448
#define ScriptXtoCP_FUNC 449
#define ScrollWindowEx_FUNC 450
#define SelectClipRgn_FUNC 451
#define SelectObject_FUNC 452
#define SelectPalette_FUNC 453
#define SendInput_FUNC 454
#define SendMessageA__IIII_FUNC 455
#define SendMessageA__IIILorg_eclipse_swt_internal_win32_LVCOLUMN_2_FUNC 456
#define SendMessageA__IIILorg_eclipse_swt_internal_win32_LVHITTESTINFO_2_FUNC 457
#define SendMessageA__IIILorg_eclipse_swt_internal_win32_LVITEM_2_FUNC 458
#define SendMessageA__IIILorg_eclipse_swt_internal_win32_MARGINS_2_FUNC 459
#define SendMessageA__IIILorg_eclipse_swt_internal_win32_REBARBANDINFO_2_FUNC 460
#define SendMessageA__IIILorg_eclipse_swt_internal_win32_RECT_2_FUNC 461
#define SendMessageA__IIILorg_eclipse_swt_internal_win32_TBBUTTONINFO_2_FUNC 462
#define SendMessageA__IIILorg_eclipse_swt_internal_win32_TBBUTTON_2_FUNC 463
#define SendMessageA__IIILorg_eclipse_swt_internal_win32_TCITEM_2_FUNC 464
#define SendMessageA__IIILorg_eclipse_swt_internal_win32_TOOLINFO_2_FUNC 465
#define SendMessageA__IIILorg_eclipse_swt_internal_win32_TVHITTESTINFO_2_FUNC 466
#define SendMessageA__IIILorg_eclipse_swt_internal_win32_TVINSERTSTRUCT_2_FUNC 467
#define SendMessageA__IIILorg_eclipse_swt_internal_win32_TVITEM_2_FUNC 468
#define SendMessageA__III_3B_FUNC 469
#define SendMessageA__III_3I_FUNC 470
#define SendMessageA__III_3S_FUNC 471
#define SendMessageA__II_3II_FUNC 472
#define SendMessageA__II_3I_3I_FUNC 473
#define SendMessageW__IIII_FUNC 474
#define SendMessageW__IIILorg_eclipse_swt_internal_win32_LVCOLUMN_2_FUNC 475
#define SendMessageW__IIILorg_eclipse_swt_internal_win32_LVHITTESTINFO_2_FUNC 476
#define SendMessageW__IIILorg_eclipse_swt_internal_win32_LVITEM_2_FUNC 477
#define SendMessageW__IIILorg_eclipse_swt_internal_win32_MARGINS_2_FUNC 478
#define SendMessageW__IIILorg_eclipse_swt_internal_win32_REBARBANDINFO_2_FUNC 479
#define SendMessageW__IIILorg_eclipse_swt_internal_win32_RECT_2_FUNC 480
#define SendMessageW__IIILorg_eclipse_swt_internal_win32_TBBUTTONINFO_2_FUNC 481
#define SendMessageW__IIILorg_eclipse_swt_internal_win32_TBBUTTON_2_FUNC 482
#define SendMessageW__IIILorg_eclipse_swt_internal_win32_TCITEM_2_FUNC 483
#define SendMessageW__IIILorg_eclipse_swt_internal_win32_TOOLINFO_2_FUNC 484
#define SendMessageW__IIILorg_eclipse_swt_internal_win32_TVHITTESTINFO_2_FUNC 485
#define SendMessageW__IIILorg_eclipse_swt_internal_win32_TVINSERTSTRUCT_2_FUNC 486
#define SendMessageW__IIILorg_eclipse_swt_internal_win32_TVITEM_2_FUNC 487
#define SendMessageW__III_3C_FUNC 488
#define SendMessageW__III_3I_FUNC 489
#define SendMessageW__III_3S_FUNC 490
#define SendMessageW__II_3II_FUNC 491
#define SendMessageW__II_3I_3I_FUNC 492
#define SetActiveWindow_FUNC 493
#define SetBkColor_FUNC 494
#define SetBkMode_FUNC 495
#define SetCapture_FUNC 496
#define SetCaretPos_FUNC 497
#define SetClipboardData_FUNC 498
#define SetCursor_FUNC 499
#define SetCursorPos_FUNC 500
#define SetDIBColorTable_FUNC 501
#define SetErrorMode_FUNC 502
#define SetFocus_FUNC 503
#define SetForegroundWindow_FUNC 504
#define SetLayout_FUNC 505
#define SetMenu_FUNC 506
#define SetMenuDefaultItem_FUNC 507
#define SetMenuInfo_FUNC 508
#define SetMenuItemInfoA_FUNC 509
#define SetMenuItemInfoW_FUNC 510
#define SetPaletteEntries_FUNC 511
#define SetParent_FUNC 512
#define SetPixel_FUNC 513
#define SetROP2_FUNC 514
#define SetRect_FUNC 515
#define SetRectRgn_FUNC 516
#define SetScrollInfo_FUNC 517
#define SetStretchBltMode_FUNC 518
#define SetTextAlign_FUNC 519
#define SetTextColor_FUNC 520
#define SetTimer_FUNC 521
#define SetWindowLongA_FUNC 522
#define SetWindowLongW_FUNC 523
#define SetWindowPlacement_FUNC 524
#define SetWindowPos_FUNC 525
#define SetWindowRgn_FUNC 526
#define SetWindowTextA_FUNC 527
#define SetWindowTextW_FUNC 528
#define SetWindowsHookExA_FUNC 529
#define SetWindowsHookExW_FUNC 530
#define ShellExecuteExA_FUNC 531
#define ShellExecuteExW_FUNC 532
#define Shell_1NotifyIconA_FUNC 533
#define Shell_1NotifyIconW_FUNC 534
#define ShowCaret_FUNC 535
#define ShowOwnedPopups_FUNC 536
#define ShowScrollBar_FUNC 537
#define ShowWindow_FUNC 538
#define SipGetInfo_FUNC 539
#define StartDocA_FUNC 540
#define StartDocW_FUNC 541
#define StartPage_FUNC 542
#define StretchBlt_FUNC 543
#define SystemParametersInfoA__IILorg_eclipse_swt_internal_win32_HIGHCONTRAST_2I_FUNC 544
#define SystemParametersInfoA__IILorg_eclipse_swt_internal_win32_NONCLIENTMETRICSA_2I_FUNC 545
#define SystemParametersInfoA__IILorg_eclipse_swt_internal_win32_RECT_2I_FUNC 546
#define SystemParametersInfoA__II_3II_FUNC 547
#define SystemParametersInfoW__IILorg_eclipse_swt_internal_win32_HIGHCONTRAST_2I_FUNC 548
#define SystemParametersInfoW__IILorg_eclipse_swt_internal_win32_NONCLIENTMETRICSW_2I_FUNC 549
#define SystemParametersInfoW__IILorg_eclipse_swt_internal_win32_RECT_2I_FUNC 550
#define SystemParametersInfoW__II_3II_FUNC 551
#define ToAscii_FUNC 552
#define ToUnicode_FUNC 553
#define TrackMouseEvent_FUNC 554
#define TrackPopupMenu_FUNC 555
#define TranslateAcceleratorA_FUNC 556
#define TranslateAcceleratorW_FUNC 557
#define TranslateCharsetInfo_FUNC 558
#define TranslateMDISysAccel_FUNC 559
#define TranslateMessage_FUNC 560
#define TransparentImage_FUNC 561
#define UnhookWindowsHookEx_FUNC 562
#define UnregisterClassA_FUNC 563
#define UnregisterClassW_FUNC 564
#define UpdateWindow_FUNC 565
#define ValidateRect_FUNC 566
#define VkKeyScanA_FUNC 567
#define VkKeyScanW_FUNC 568
#define VtblCall_FUNC 569
#define WaitMessage_FUNC 570
#define WideCharToMultiByte__II_3CIII_3B_3Z_FUNC 571
#define WideCharToMultiByte__II_3CI_3BI_3B_3Z_FUNC 572
#define WindowFromDC_FUNC 573
#define WindowFromPoint_FUNC 574
#define wcslen_FUNC 575
