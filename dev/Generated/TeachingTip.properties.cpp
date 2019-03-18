// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "TeachingTip.h"

CppWinRTActivatableClassWithDPFactory(TeachingTip)

GlobalDependencyProperty TeachingTipProperties::s_ActionButtonCommandProperty{ nullptr };
GlobalDependencyProperty TeachingTipProperties::s_ActionButtonCommandParameterProperty{ nullptr };
GlobalDependencyProperty TeachingTipProperties::s_ActionButtonContentProperty{ nullptr };
GlobalDependencyProperty TeachingTipProperties::s_ActionButtonStyleProperty{ nullptr };
GlobalDependencyProperty TeachingTipProperties::s_CloseButtonCommandProperty{ nullptr };
GlobalDependencyProperty TeachingTipProperties::s_CloseButtonCommandParameterProperty{ nullptr };
GlobalDependencyProperty TeachingTipProperties::s_CloseButtonContentProperty{ nullptr };
GlobalDependencyProperty TeachingTipProperties::s_CloseButtonStyleProperty{ nullptr };
GlobalDependencyProperty TeachingTipProperties::s_HeroContentProperty{ nullptr };
GlobalDependencyProperty TeachingTipProperties::s_HeroContentPlacementProperty{ nullptr };
GlobalDependencyProperty TeachingTipProperties::s_IconSourceProperty{ nullptr };
GlobalDependencyProperty TeachingTipProperties::s_IsLightDismissEnabledProperty{ nullptr };
GlobalDependencyProperty TeachingTipProperties::s_IsOpenProperty{ nullptr };
GlobalDependencyProperty TeachingTipProperties::s_PlacementMarginProperty{ nullptr };
GlobalDependencyProperty TeachingTipProperties::s_PointerModeProperty{ nullptr };
GlobalDependencyProperty TeachingTipProperties::s_PreferredPlacementProperty{ nullptr };
GlobalDependencyProperty TeachingTipProperties::s_SubtitleProperty{ nullptr };
GlobalDependencyProperty TeachingTipProperties::s_TargetProperty{ nullptr };
GlobalDependencyProperty TeachingTipProperties::s_TemplateSettingsProperty{ nullptr };
GlobalDependencyProperty TeachingTipProperties::s_TitleProperty{ nullptr };

TeachingTipProperties::TeachingTipProperties()
    : m_actionButtonClickEventSource{static_cast<TeachingTip*>(this)}
    , m_closeButtonClickEventSource{static_cast<TeachingTip*>(this)}
    , m_closedEventSource{static_cast<TeachingTip*>(this)}
    , m_closingEventSource{static_cast<TeachingTip*>(this)}
{
    EnsureProperties();
}

void TeachingTipProperties::EnsureProperties()
{
    if (!s_ActionButtonCommandProperty)
    {
        s_ActionButtonCommandProperty =
            InitializeDependencyProperty(
                L"ActionButtonCommand",
                winrt::name_of<winrt::ICommand>(),
                winrt::name_of<winrt::TeachingTip>(),
                false /* isAttached */,
                ValueHelper<winrt::ICommand>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnActionButtonCommandPropertyChanged));
    }
    if (!s_ActionButtonCommandParameterProperty)
    {
        s_ActionButtonCommandParameterProperty =
            InitializeDependencyProperty(
                L"ActionButtonCommandParameter",
                winrt::name_of<winrt::IInspectable>(),
                winrt::name_of<winrt::TeachingTip>(),
                false /* isAttached */,
                ValueHelper<winrt::IInspectable>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnActionButtonCommandParameterPropertyChanged));
    }
    if (!s_ActionButtonContentProperty)
    {
        s_ActionButtonContentProperty =
            InitializeDependencyProperty(
                L"ActionButtonContent",
                winrt::name_of<winrt::IInspectable>(),
                winrt::name_of<winrt::TeachingTip>(),
                false /* isAttached */,
                ValueHelper<winrt::IInspectable>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnActionButtonContentPropertyChanged));
    }
    if (!s_ActionButtonStyleProperty)
    {
        s_ActionButtonStyleProperty =
            InitializeDependencyProperty(
                L"ActionButtonStyle",
                winrt::name_of<winrt::Style>(),
                winrt::name_of<winrt::TeachingTip>(),
                false /* isAttached */,
                ValueHelper<winrt::Style>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnActionButtonStylePropertyChanged));
    }
    if (!s_CloseButtonCommandProperty)
    {
        s_CloseButtonCommandProperty =
            InitializeDependencyProperty(
                L"CloseButtonCommand",
                winrt::name_of<winrt::ICommand>(),
                winrt::name_of<winrt::TeachingTip>(),
                false /* isAttached */,
                ValueHelper<winrt::ICommand>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnCloseButtonCommandPropertyChanged));
    }
    if (!s_CloseButtonCommandParameterProperty)
    {
        s_CloseButtonCommandParameterProperty =
            InitializeDependencyProperty(
                L"CloseButtonCommandParameter",
                winrt::name_of<winrt::IInspectable>(),
                winrt::name_of<winrt::TeachingTip>(),
                false /* isAttached */,
                ValueHelper<winrt::IInspectable>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnCloseButtonCommandParameterPropertyChanged));
    }
    if (!s_CloseButtonContentProperty)
    {
        s_CloseButtonContentProperty =
            InitializeDependencyProperty(
                L"CloseButtonContent",
                winrt::name_of<winrt::IInspectable>(),
                winrt::name_of<winrt::TeachingTip>(),
                false /* isAttached */,
                ValueHelper<winrt::IInspectable>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnCloseButtonContentPropertyChanged));
    }
    if (!s_CloseButtonStyleProperty)
    {
        s_CloseButtonStyleProperty =
            InitializeDependencyProperty(
                L"CloseButtonStyle",
                winrt::name_of<winrt::Style>(),
                winrt::name_of<winrt::TeachingTip>(),
                false /* isAttached */,
                ValueHelper<winrt::Style>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnCloseButtonStylePropertyChanged));
    }
    if (!s_HeroContentProperty)
    {
        s_HeroContentProperty =
            InitializeDependencyProperty(
                L"HeroContent",
                winrt::name_of<winrt::UIElement>(),
                winrt::name_of<winrt::TeachingTip>(),
                false /* isAttached */,
                ValueHelper<winrt::UIElement>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnHeroContentPropertyChanged));
    }
    if (!s_HeroContentPlacementProperty)
    {
        s_HeroContentPlacementProperty =
            InitializeDependencyProperty(
                L"HeroContentPlacement",
                winrt::name_of<winrt::TeachingTipHeroContentPlacementMode>(),
                winrt::name_of<winrt::TeachingTip>(),
                false /* isAttached */,
                ValueHelper<winrt::TeachingTipHeroContentPlacementMode>::BoxValueIfNecessary(winrt::TeachingTipHeroContentPlacementMode::Auto),
                winrt::PropertyChangedCallback(&OnHeroContentPlacementPropertyChanged));
    }
    if (!s_IconSourceProperty)
    {
        s_IconSourceProperty =
            InitializeDependencyProperty(
                L"IconSource",
                winrt::name_of<winrt::IconSource>(),
                winrt::name_of<winrt::TeachingTip>(),
                false /* isAttached */,
                ValueHelper<winrt::IconSource>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnIconSourcePropertyChanged));
    }
    if (!s_IsLightDismissEnabledProperty)
    {
        s_IsLightDismissEnabledProperty =
            InitializeDependencyProperty(
                L"IsLightDismissEnabled",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::TeachingTip>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(false),
                winrt::PropertyChangedCallback(&OnIsLightDismissEnabledPropertyChanged));
    }
    if (!s_IsOpenProperty)
    {
        s_IsOpenProperty =
            InitializeDependencyProperty(
                L"IsOpen",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::TeachingTip>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(false),
                winrt::PropertyChangedCallback(&OnIsOpenPropertyChanged));
    }
    if (!s_PlacementMarginProperty)
    {
        s_PlacementMarginProperty =
            InitializeDependencyProperty(
                L"PlacementMargin",
                winrt::name_of<winrt::Thickness>(),
                winrt::name_of<winrt::TeachingTip>(),
                false /* isAttached */,
                ValueHelper<winrt::Thickness>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPlacementMarginPropertyChanged));
    }
    if (!s_PointerModeProperty)
    {
        s_PointerModeProperty =
            InitializeDependencyProperty(
                L"PointerMode",
                winrt::name_of<winrt::TeachingTipPointerMode>(),
                winrt::name_of<winrt::TeachingTip>(),
                false /* isAttached */,
                ValueHelper<winrt::TeachingTipPointerMode>::BoxValueIfNecessary(winrt::TeachingTipPointerMode::Auto),
                winrt::PropertyChangedCallback(&OnPointerModePropertyChanged));
    }
    if (!s_PreferredPlacementProperty)
    {
        s_PreferredPlacementProperty =
            InitializeDependencyProperty(
                L"PreferredPlacement",
                winrt::name_of<winrt::TeachingTipPlacementMode>(),
                winrt::name_of<winrt::TeachingTip>(),
                false /* isAttached */,
                ValueHelper<winrt::TeachingTipPlacementMode>::BoxValueIfNecessary(winrt::TeachingTipPlacementMode::Auto),
                winrt::PropertyChangedCallback(&OnPreferredPlacementPropertyChanged));
    }
    if (!s_SubtitleProperty)
    {
        s_SubtitleProperty =
            InitializeDependencyProperty(
                L"Subtitle",
                winrt::name_of<winrt::hstring>(),
                winrt::name_of<winrt::TeachingTip>(),
                false /* isAttached */,
                ValueHelper<winrt::hstring>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnSubtitlePropertyChanged));
    }
    if (!s_TargetProperty)
    {
        s_TargetProperty =
            InitializeDependencyProperty(
                L"Target",
                winrt::name_of<winrt::FrameworkElement>(),
                winrt::name_of<winrt::TeachingTip>(),
                false /* isAttached */,
                ValueHelper<winrt::FrameworkElement>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnTargetPropertyChanged));
    }
    if (!s_TemplateSettingsProperty)
    {
        s_TemplateSettingsProperty =
            InitializeDependencyProperty(
                L"TemplateSettings",
                winrt::name_of<winrt::TeachingTipTemplateSettings>(),
                winrt::name_of<winrt::TeachingTip>(),
                false /* isAttached */,
                ValueHelper<winrt::TeachingTipTemplateSettings>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnTemplateSettingsPropertyChanged));
    }
    if (!s_TitleProperty)
    {
        s_TitleProperty =
            InitializeDependencyProperty(
                L"Title",
                winrt::name_of<winrt::hstring>(),
                winrt::name_of<winrt::TeachingTip>(),
                false /* isAttached */,
                ValueHelper<winrt::hstring>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnTitlePropertyChanged));
    }
}

void TeachingTipProperties::ClearProperties()
{
    s_ActionButtonCommandProperty = nullptr;
    s_ActionButtonCommandParameterProperty = nullptr;
    s_ActionButtonContentProperty = nullptr;
    s_ActionButtonStyleProperty = nullptr;
    s_CloseButtonCommandProperty = nullptr;
    s_CloseButtonCommandParameterProperty = nullptr;
    s_CloseButtonContentProperty = nullptr;
    s_CloseButtonStyleProperty = nullptr;
    s_HeroContentProperty = nullptr;
    s_HeroContentPlacementProperty = nullptr;
    s_IconSourceProperty = nullptr;
    s_IsLightDismissEnabledProperty = nullptr;
    s_IsOpenProperty = nullptr;
    s_PlacementMarginProperty = nullptr;
    s_PointerModeProperty = nullptr;
    s_PreferredPlacementProperty = nullptr;
    s_SubtitleProperty = nullptr;
    s_TargetProperty = nullptr;
    s_TemplateSettingsProperty = nullptr;
    s_TitleProperty = nullptr;
}

void TeachingTipProperties::OnActionButtonCommandPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TeachingTip>();
    winrt::get_self<TeachingTip>(owner)->OnPropertyChanged(args);
}

void TeachingTipProperties::OnActionButtonCommandParameterPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TeachingTip>();
    winrt::get_self<TeachingTip>(owner)->OnPropertyChanged(args);
}

void TeachingTipProperties::OnActionButtonContentPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TeachingTip>();
    winrt::get_self<TeachingTip>(owner)->OnPropertyChanged(args);
}

void TeachingTipProperties::OnActionButtonStylePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TeachingTip>();
    winrt::get_self<TeachingTip>(owner)->OnPropertyChanged(args);
}

void TeachingTipProperties::OnCloseButtonCommandPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TeachingTip>();
    winrt::get_self<TeachingTip>(owner)->OnPropertyChanged(args);
}

void TeachingTipProperties::OnCloseButtonCommandParameterPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TeachingTip>();
    winrt::get_self<TeachingTip>(owner)->OnPropertyChanged(args);
}

void TeachingTipProperties::OnCloseButtonContentPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TeachingTip>();
    winrt::get_self<TeachingTip>(owner)->OnPropertyChanged(args);
}

void TeachingTipProperties::OnCloseButtonStylePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TeachingTip>();
    winrt::get_self<TeachingTip>(owner)->OnPropertyChanged(args);
}

void TeachingTipProperties::OnHeroContentPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TeachingTip>();
    winrt::get_self<TeachingTip>(owner)->OnPropertyChanged(args);
}

void TeachingTipProperties::OnHeroContentPlacementPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TeachingTip>();
    winrt::get_self<TeachingTip>(owner)->OnPropertyChanged(args);
}

void TeachingTipProperties::OnIconSourcePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TeachingTip>();
    winrt::get_self<TeachingTip>(owner)->OnPropertyChanged(args);
}

void TeachingTipProperties::OnIsLightDismissEnabledPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TeachingTip>();
    winrt::get_self<TeachingTip>(owner)->OnPropertyChanged(args);
}

void TeachingTipProperties::OnIsOpenPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TeachingTip>();
    winrt::get_self<TeachingTip>(owner)->OnPropertyChanged(args);
}

void TeachingTipProperties::OnPlacementMarginPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TeachingTip>();
    winrt::get_self<TeachingTip>(owner)->OnPropertyChanged(args);
}

void TeachingTipProperties::OnPointerModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TeachingTip>();
    winrt::get_self<TeachingTip>(owner)->OnPropertyChanged(args);
}

void TeachingTipProperties::OnPreferredPlacementPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TeachingTip>();
    winrt::get_self<TeachingTip>(owner)->OnPropertyChanged(args);
}

void TeachingTipProperties::OnSubtitlePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TeachingTip>();
    winrt::get_self<TeachingTip>(owner)->OnPropertyChanged(args);
}

void TeachingTipProperties::OnTargetPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TeachingTip>();
    winrt::get_self<TeachingTip>(owner)->OnPropertyChanged(args);
}

void TeachingTipProperties::OnTemplateSettingsPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TeachingTip>();
    winrt::get_self<TeachingTip>(owner)->OnPropertyChanged(args);
}

void TeachingTipProperties::OnTitlePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TeachingTip>();
    winrt::get_self<TeachingTip>(owner)->OnPropertyChanged(args);
}

void TeachingTipProperties::ActionButtonCommand(winrt::ICommand const& value)
{
    static_cast<TeachingTip*>(this)->SetValue(s_ActionButtonCommandProperty, ValueHelper<winrt::ICommand>::BoxValueIfNecessary(value));
}

winrt::ICommand TeachingTipProperties::ActionButtonCommand()
{
    return ValueHelper<winrt::ICommand>::CastOrUnbox(static_cast<TeachingTip*>(this)->GetValue(s_ActionButtonCommandProperty));
}

void TeachingTipProperties::ActionButtonCommandParameter(winrt::IInspectable const& value)
{
    static_cast<TeachingTip*>(this)->SetValue(s_ActionButtonCommandParameterProperty, ValueHelper<winrt::IInspectable>::BoxValueIfNecessary(value));
}

winrt::IInspectable TeachingTipProperties::ActionButtonCommandParameter()
{
    return ValueHelper<winrt::IInspectable>::CastOrUnbox(static_cast<TeachingTip*>(this)->GetValue(s_ActionButtonCommandParameterProperty));
}

void TeachingTipProperties::ActionButtonContent(winrt::IInspectable const& value)
{
    static_cast<TeachingTip*>(this)->SetValue(s_ActionButtonContentProperty, ValueHelper<winrt::IInspectable>::BoxValueIfNecessary(value));
}

winrt::IInspectable TeachingTipProperties::ActionButtonContent()
{
    return ValueHelper<winrt::IInspectable>::CastOrUnbox(static_cast<TeachingTip*>(this)->GetValue(s_ActionButtonContentProperty));
}

void TeachingTipProperties::ActionButtonStyle(winrt::Style const& value)
{
    static_cast<TeachingTip*>(this)->SetValue(s_ActionButtonStyleProperty, ValueHelper<winrt::Style>::BoxValueIfNecessary(value));
}

winrt::Style TeachingTipProperties::ActionButtonStyle()
{
    return ValueHelper<winrt::Style>::CastOrUnbox(static_cast<TeachingTip*>(this)->GetValue(s_ActionButtonStyleProperty));
}

void TeachingTipProperties::CloseButtonCommand(winrt::ICommand const& value)
{
    static_cast<TeachingTip*>(this)->SetValue(s_CloseButtonCommandProperty, ValueHelper<winrt::ICommand>::BoxValueIfNecessary(value));
}

winrt::ICommand TeachingTipProperties::CloseButtonCommand()
{
    return ValueHelper<winrt::ICommand>::CastOrUnbox(static_cast<TeachingTip*>(this)->GetValue(s_CloseButtonCommandProperty));
}

void TeachingTipProperties::CloseButtonCommandParameter(winrt::IInspectable const& value)
{
    static_cast<TeachingTip*>(this)->SetValue(s_CloseButtonCommandParameterProperty, ValueHelper<winrt::IInspectable>::BoxValueIfNecessary(value));
}

winrt::IInspectable TeachingTipProperties::CloseButtonCommandParameter()
{
    return ValueHelper<winrt::IInspectable>::CastOrUnbox(static_cast<TeachingTip*>(this)->GetValue(s_CloseButtonCommandParameterProperty));
}

void TeachingTipProperties::CloseButtonContent(winrt::IInspectable const& value)
{
    static_cast<TeachingTip*>(this)->SetValue(s_CloseButtonContentProperty, ValueHelper<winrt::IInspectable>::BoxValueIfNecessary(value));
}

winrt::IInspectable TeachingTipProperties::CloseButtonContent()
{
    return ValueHelper<winrt::IInspectable>::CastOrUnbox(static_cast<TeachingTip*>(this)->GetValue(s_CloseButtonContentProperty));
}

void TeachingTipProperties::CloseButtonStyle(winrt::Style const& value)
{
    static_cast<TeachingTip*>(this)->SetValue(s_CloseButtonStyleProperty, ValueHelper<winrt::Style>::BoxValueIfNecessary(value));
}

winrt::Style TeachingTipProperties::CloseButtonStyle()
{
    return ValueHelper<winrt::Style>::CastOrUnbox(static_cast<TeachingTip*>(this)->GetValue(s_CloseButtonStyleProperty));
}

void TeachingTipProperties::HeroContent(winrt::UIElement const& value)
{
    static_cast<TeachingTip*>(this)->SetValue(s_HeroContentProperty, ValueHelper<winrt::UIElement>::BoxValueIfNecessary(value));
}

winrt::UIElement TeachingTipProperties::HeroContent()
{
    return ValueHelper<winrt::UIElement>::CastOrUnbox(static_cast<TeachingTip*>(this)->GetValue(s_HeroContentProperty));
}

void TeachingTipProperties::HeroContentPlacement(winrt::TeachingTipHeroContentPlacementMode const& value)
{
    static_cast<TeachingTip*>(this)->SetValue(s_HeroContentPlacementProperty, ValueHelper<winrt::TeachingTipHeroContentPlacementMode>::BoxValueIfNecessary(value));
}

winrt::TeachingTipHeroContentPlacementMode TeachingTipProperties::HeroContentPlacement()
{
    return ValueHelper<winrt::TeachingTipHeroContentPlacementMode>::CastOrUnbox(static_cast<TeachingTip*>(this)->GetValue(s_HeroContentPlacementProperty));
}

void TeachingTipProperties::IconSource(winrt::IconSource const& value)
{
    static_cast<TeachingTip*>(this)->SetValue(s_IconSourceProperty, ValueHelper<winrt::IconSource>::BoxValueIfNecessary(value));
}

winrt::IconSource TeachingTipProperties::IconSource()
{
    return ValueHelper<winrt::IconSource>::CastOrUnbox(static_cast<TeachingTip*>(this)->GetValue(s_IconSourceProperty));
}

void TeachingTipProperties::IsLightDismissEnabled(bool value)
{
    static_cast<TeachingTip*>(this)->SetValue(s_IsLightDismissEnabledProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool TeachingTipProperties::IsLightDismissEnabled()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<TeachingTip*>(this)->GetValue(s_IsLightDismissEnabledProperty));
}

void TeachingTipProperties::IsOpen(bool value)
{
    static_cast<TeachingTip*>(this)->SetValue(s_IsOpenProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool TeachingTipProperties::IsOpen()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<TeachingTip*>(this)->GetValue(s_IsOpenProperty));
}

void TeachingTipProperties::PlacementMargin(winrt::Thickness const& value)
{
    static_cast<TeachingTip*>(this)->SetValue(s_PlacementMarginProperty, ValueHelper<winrt::Thickness>::BoxValueIfNecessary(value));
}

winrt::Thickness TeachingTipProperties::PlacementMargin()
{
    return ValueHelper<winrt::Thickness>::CastOrUnbox(static_cast<TeachingTip*>(this)->GetValue(s_PlacementMarginProperty));
}

void TeachingTipProperties::PointerMode(winrt::TeachingTipPointerMode const& value)
{
    static_cast<TeachingTip*>(this)->SetValue(s_PointerModeProperty, ValueHelper<winrt::TeachingTipPointerMode>::BoxValueIfNecessary(value));
}

winrt::TeachingTipPointerMode TeachingTipProperties::PointerMode()
{
    return ValueHelper<winrt::TeachingTipPointerMode>::CastOrUnbox(static_cast<TeachingTip*>(this)->GetValue(s_PointerModeProperty));
}

void TeachingTipProperties::PreferredPlacement(winrt::TeachingTipPlacementMode const& value)
{
    static_cast<TeachingTip*>(this)->SetValue(s_PreferredPlacementProperty, ValueHelper<winrt::TeachingTipPlacementMode>::BoxValueIfNecessary(value));
}

winrt::TeachingTipPlacementMode TeachingTipProperties::PreferredPlacement()
{
    return ValueHelper<winrt::TeachingTipPlacementMode>::CastOrUnbox(static_cast<TeachingTip*>(this)->GetValue(s_PreferredPlacementProperty));
}

void TeachingTipProperties::Subtitle(winrt::hstring const& value)
{
    static_cast<TeachingTip*>(this)->SetValue(s_SubtitleProperty, ValueHelper<winrt::hstring>::BoxValueIfNecessary(value));
}

winrt::hstring TeachingTipProperties::Subtitle()
{
    return ValueHelper<winrt::hstring>::CastOrUnbox(static_cast<TeachingTip*>(this)->GetValue(s_SubtitleProperty));
}

void TeachingTipProperties::Target(winrt::FrameworkElement const& value)
{
    static_cast<TeachingTip*>(this)->SetValue(s_TargetProperty, ValueHelper<winrt::FrameworkElement>::BoxValueIfNecessary(value));
}

winrt::FrameworkElement TeachingTipProperties::Target()
{
    return ValueHelper<winrt::FrameworkElement>::CastOrUnbox(static_cast<TeachingTip*>(this)->GetValue(s_TargetProperty));
}

void TeachingTipProperties::TemplateSettings(winrt::TeachingTipTemplateSettings const& value)
{
    static_cast<TeachingTip*>(this)->SetValue(s_TemplateSettingsProperty, ValueHelper<winrt::TeachingTipTemplateSettings>::BoxValueIfNecessary(value));
}

winrt::TeachingTipTemplateSettings TeachingTipProperties::TemplateSettings()
{
    return ValueHelper<winrt::TeachingTipTemplateSettings>::CastOrUnbox(static_cast<TeachingTip*>(this)->GetValue(s_TemplateSettingsProperty));
}

void TeachingTipProperties::Title(winrt::hstring const& value)
{
    static_cast<TeachingTip*>(this)->SetValue(s_TitleProperty, ValueHelper<winrt::hstring>::BoxValueIfNecessary(value));
}

winrt::hstring TeachingTipProperties::Title()
{
    return ValueHelper<winrt::hstring>::CastOrUnbox(static_cast<TeachingTip*>(this)->GetValue(s_TitleProperty));
}

winrt::event_token TeachingTipProperties::ActionButtonClick(winrt::TypedEventHandler<winrt::TeachingTip, winrt::IInspectable> const& value)
{
    return m_actionButtonClickEventSource.add(value);
}

void TeachingTipProperties::ActionButtonClick(winrt::event_token const& token)
{
    m_actionButtonClickEventSource.remove(token);
}

winrt::event_token TeachingTipProperties::CloseButtonClick(winrt::TypedEventHandler<winrt::TeachingTip, winrt::IInspectable> const& value)
{
    return m_closeButtonClickEventSource.add(value);
}

void TeachingTipProperties::CloseButtonClick(winrt::event_token const& token)
{
    m_closeButtonClickEventSource.remove(token);
}

winrt::event_token TeachingTipProperties::Closed(winrt::TypedEventHandler<winrt::TeachingTip, winrt::TeachingTipClosedEventArgs> const& value)
{
    return m_closedEventSource.add(value);
}

void TeachingTipProperties::Closed(winrt::event_token const& token)
{
    m_closedEventSource.remove(token);
}

winrt::event_token TeachingTipProperties::Closing(winrt::TypedEventHandler<winrt::TeachingTip, winrt::TeachingTipClosingEventArgs> const& value)
{
    return m_closingEventSource.add(value);
}

void TeachingTipProperties::Closing(winrt::event_token const& token)
{
    m_closingEventSource.remove(token);
}
