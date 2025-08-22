﻿#include "stdafx.h"

// IMPORTANT NOTE!!!
// The standard font used by this app DOES NOT support the characters required for some languages.
// Unfortunately I have no idea how to create a new font that does.

// Localised language support - Credit FreeMyXe, this is how it's handled there.
LocalisationMessages_t english = {
    // Error Messagebox
    L"Unfortunately an error occurred while running Stage %i\n\nApp will now exit",
    L"Understood",
    // Dashlaunch load status
    L"Dashlaunch: Loaded! %ls",
    L"[HDD mode]",
    L"[USB mode] DO NOT UNPLUG THE USB!",
    L"Dashlaunch: FAILED! - Failed to write lhelper.xex. Section data error!",
    L"Dashlaunch: FAILED! - Failed to write lhelper.xex. Mount error!",
    L"Dashlaunch: FAILED! - Failed to write lhelper.xex to storage device.",
    L"Dashlaunch: FAILED! - Failed to load launch.xex. Section data error!",
    L"Dashlaunch: FAILED! - Status: %X",
    // Dump 1BL Notify
    L"[Dump1blRomToFile] FAILED! Non-zero result from Hvx...",
    L"Saved to %S-1bl.bin",
    L"[Dump1blRomToFile] FAILED! Failed to write file...",
    // Save Console Info Notify
    L"Saved to ConsoleInfo.txt",
    L"Saving Failed!",
    // Save Orig MAC
    L"Original MAC dumped to OriginalMACAddress.bin",
    L"Failed to dump original MAC!",
    // Main Screen Text
    L"All patches have now been applied!\nRegular JTAG/RGH functionality should now be possible on your system.\n\nTHIS IS NOT PERSISTENT!\nYour console will return to a completely stock unmodified state once shut down.\nIt is HIGHLY recommended that you now go dump a copy of your nand!",
    L"Any plugins set in launch.ini will load when you exit this app.\nLiveBlock should be working now if enabled in the launch.ini.\nPlug in your ethernet cable before exiting to allow stealths to authenticate correctly.",
    GLYPH_X_BUTTON L" Save info to file",
    GLYPH_Y_BUTTON L" Dump 1BL to file",
    L"Press " GLYPH_BACK_BUTTON L" to exit"
};

LocalisationMessages_t spanish = {
    L"Lamentablemente ocurrió un error al ejecutar Stage %i\n\nLa aplicación ahora se cerrará",
    L"Comprendido",
    // Dashlaunch load status
    L"Dashlaunch: ¡Cargado! %ls",
    L"[Modo HDD]",
    L"[Modo USB] ¡NO DESCONECTE EL USB!",
    L"Dashlaunch: ¡FALLÓ! - No se pudo escribir lhelper.xex. ¡Error en los datos de la sección!",
    L"Dashlaunch: ¡FALLÓ! - No se pudo escribir lhelper.xex. ¡Error de montaje!",
    L"Dashlaunch: ¡FALLÓ! - No se pudo escribir lhelper.xex en el dispositivo de almacenamiento.",
    L"Dashlaunch: ¡FALLÓ! - No se pudo cargar launch.xex. ¡Error en los datos de la sección!",
    L"Dashlaunch: ¡FALLÓ! - Estado: %X",
    // Dump 1BL Notify
    L"[Dump1blRomToFile] ¡FALLÓ! Resultado distinto de cero de Hvx...",
    L"Guardado en %S-1bl.bin",
    L"[Dump1blRomToFile] ¡FALLÓ! No se pudo escribir el archivo...",
    // Save Console Info Notify
    L"Guardado en ConsoleInfo.txt",
    L"¡Error al guardar!",
    // Save Orig MAC
    L"MAC original volcada a OriginalMACAddress.bin",
    L"No se pudo volcar el original MAC!",
    // Main Screen Text
    L"¡Todos los parches han sido aplicados!\nLa funcionalidad JTAG/RGH regular ahora debería ser posible en tu sistema\n\nESTO NO ES PERMANENTE!\nTu consola volverá a un estado completamente original y sin modificaciones\nuna vez que se apague la consola\nSe recomienda altamente que ahora hagas una copia de seguridad de tu NAND!",
    L"Cualquier complemento configurado en launch.ini se cargará cuando salgas de esta aplicación\nLiveBlock debería estar funcionando ahora si está habilitado en launch.ini.\nConecta tu cable de Internet antes de salir para permitir que los servicios\nque necesiten autenticación lo hagan correctamente",
    GLYPH_X_BUTTON L" Guardar información",
    GLYPH_Y_BUTTON L" Volcar 1BL",
    L"Presionar " GLYPH_BACK_BUTTON L" para salir"
};

LocalisationMessages_t canadian_french = {
    // Error Messagebox
    L"Malheureusement, une erreur s'est produite lors de l'exécution de l'étape %i\n\nL'application va maintenant se fermer",
    L"Compris",
    // Dashlaunch load status
    L"Dashlaunch: Chargé ! %ls",
    L"[Mode HDD]",
    L"[Mode USB] NE DÉBRANCHEZ PAS LA CLÉ USB !",
    L"Dashlaunch: ÉCHEC ! - Échec de l'écriture de lhelper.xex. Erreur de données de section !",
    L"Dashlaunch: ÉCHEC ! - Échec de l'écriture de lhelper.xex. Erreur de montage !",
    L"Dashlaunch: ÉCHEC ! - Échec de l'écriture de lhelper.xex sur le périphérique de stockage.",
    L"Dashlaunch: ÉCHEC ! - Échec du chargement de launch.xex. Erreur de données de section !",
    L"Dashlaunch: ÉCHEC ! - Statut : %X",
    // Dump 1BL Notify
    L"[Dump1blRomToFile] ÉCHEC ! Résultat non nul de Hvx...",
    L"Sauvegardé dans %S-1bl.bin",
    L"[Dump1blRomToFile] ÉCHEC ! Échec de l'écriture du fichier...",
    // Save Console Info Notify
    L"Sauvegardé dans ConsoleInfo.txt",
    L"Échec de la sauvegarde !",
    // Save Orig MAC
    L"MAC originale sauvegardée dans OriginalMACAddress.bin",
    L"Échec de la sauvegarde de la MAC originale !",
    // Main Screen Text
    L"Tous les correctifs ont été appliqués !\nLa fonctionnalité JTAG/RGH normale devrait maintenant être possible sur votre système.\n\nCE N'EST PAS PERSISTANT !\nVotre console reviendra à un état complètement original non modifié une fois éteinte.\nIl est FORTEMENT recommandé de faire maintenant une copie de votre nand !",
    L"Tous les plugins définis dans launch.ini seront chargés lorsque vous quitterez cette application.\nLiveBlock devrait fonctionner maintenant s'il est activé dans le launch.ini.\nBranchez votre câble Ethernet avant de quitter pour permettre aux services de stealth de s'authentifier correctement.",
    GLYPH_X_BUTTON L" Sauvegarder les informations",
    GLYPH_Y_BUTTON L" Sauvegarder le 1BL",
    L"Appuyez sur " GLYPH_BACK_BUTTON L" pour quitter"
};

LocalisationMessages_t brazilian_portuguese = {
    // Error Messagebox
    L"Infelizmente ocorreu um erro ao executar o Stage %i\n\nO Aplicativo será encerrado",
    L"Entendido",
    // Dashlaunch load status
    L"Dashlaunch: Carregado! %ls",
    L"[HDD mode]",
    L"[USB mode] NÃO DESCONECTE O USB!",
    L"Dashlaunch: FALHA! - Falha ao escrever lhelper.xex. Erro de dados da seção!",
    L"Dashlaunch: FALHA! - Falha ao escrever lhelper.xex. Erro de montagem!",
    L"Dashlaunch: FALHA! - Falha ao escrever lhelper.xex para dispositivo de armazenamento.",
    L"Dashlaunch: FALHA! - Falha ao carregar launch.xex. Erro de dados da seção!",
    L"Dashlaunch: FALHA! - Status: %X",
    // Dump 1BL Notify
    L"[Dump1blRomToFile] FALHA! Resultado diferente de zero de Hvx...",
    L"Salvo em %S-1bl.bin",
    L"[Dump1blRomToFile] FALHA! Falha ao gravar o arquivo...",
    // Save Console Info Notify
    L"Salvo em ConsoleInfo.txt",
    L"Falha ao salvar!",
    // Save Orig MAC
    L"MAC original despejado em OriginalMACAddress.bin",
    L"Não foi possível despejar o MAC original!",
    // Main Screen Text

    L"Todos os patches foram aplicados!\nAgora a funcionalidade JTAG/RGH regular deve ser possível no seu sistema.\n\nISSO NÃO É PERSISTENTE!\nSeu console retornará a um estado completamente original e não modificado assim que for desligado.\nÉ ALTAMENTE recomendado que você faça agora o dump de uma cópia do seu nand!",
    L"Todos os plugins definidos em launch.ini serão carregados quando você sair deste aplicativo.\nO LiveBlock deve estar funcionando agora se estiver habilitado em launch.ini.\nConecte seu cabo de rede antes de sair para permitir que os stealths sejam autenticados corretamente.",
    GLYPH_X_BUTTON L" Salvar informações",
    GLYPH_Y_BUTTON L" Despejar 1BL",
    L"Pressione " GLYPH_BACK_BUTTON L" para sair"    
};

//LocalisationMessages_t portuguese = {
//    
//};

//LocalisationMessages_t german = {
//    
//};

//LocalisationMessages_t swedish = {
//    
//};

//LocalisationMessages_t italian = {
//    
//};


// Launguages below here won't work without a new font to support the characters???

//LocalisationMessages_t polish = {
//    
//};

//LocalisationMessages_t russian = {
//   
//};

//LocalisationMessages_t korean = {
//    
//};

//LocalisationMessages_t chinese_simplified = {
//    
//};

LocalisationMessages_t* currentLocalisation = &english; // &spanish;


VOID SetLocale()
{
    switch (XGetLanguage())
    {
    case XC_LANGUAGE_ENGLISH:
        currentLocalisation = &english;
        break;
    case XC_LANGUAGE_SPANISH:
        currentLocalisation = &spanish;
        break;
    //case XC_LANGUAGE_GERMAN:
    //    currentLocalisation = &german;
    //    break;
    case XC_LANGUAGE_FRENCH:
        currentLocalisation = &canadian_french;
        break;
    //case XC_LANGUAGE_SWEDISH:
    //    currentLocalisation = &swedish;
    //    break;
    //case XC_LANGUAGE_ITALIAN:
    //    currentLocalisation = &italian;
    //    break;
    case XC_LANGUAGE_PORTUGUESE:
        currentLocalisation = &brazilian_portuguese;
        //waiting for the translation in Portuguese
        //if (XGetLocale() == XC_LOCALE_BRAZIL)
        //    currentLocalisation = &brazilian_portuguese;
        //else
        //    currentLocalisation = &portuguese;
        break;
    
    // === UNSUPPORTED WITHOUT NEW FONT ===
    //case XC_LANGUAGE_POLISH:
    //    currentLocalisation = &polish;
    //    break;
    //case XC_LANGUAGE_RUSSIAN:
    //    currentLocalisation = &russian;
    //    break;
    //case XC_LANGUAGE_KOREAN:
    //    currentLocalisation = &korean;
    //    break;
    //case XC_LANGUAGE_SCHINESE:
    //    currentLocalisation = &chinese_simplified;
    //    break;
    default:
        currentLocalisation = &english;
        break;
    }
}
