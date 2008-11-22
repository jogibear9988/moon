/* -*- Mode: C++; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*- */
/*
 * binding.cpp: data binding
 *
 * Contact:
 *   Moonlight List (moonlight-list@lists.ximian.com)
 *
 * Copyright 2008 Novell, Inc. (http://www.novell.com)
 *
 * See the LICENSE file included with the distribution for details.
 */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "binding.h"


BindingExpressionBase::BindingExpressionBase ()
{
	dest_property = NULL;
	dest_element = NULL;
	property = NULL;
	element = NULL;
	binding = NULL;
}

BindingExpressionBase::~BindingExpressionBase ()
{
	delete binding;
}

void
BindingExpressionBase::SetBinding (Binding *binding)
{
	delete this->binding;
	this->binding = binding;
}

void
BindingExpressionBase::SetElement (FrameworkElement *element)
{
	// FIXME: do we want to ref the element? or at least listen for the destroy signal?
	this->element = element;
}

void
BindingExpressionBase::SetProperty (DependencyProperty *property)
{
	this->property = property;
}

void
BindingExpressionBase::AttachListener (PropertyChangeHandler handler, gpointer user_data)
{
	if (element && property && handler)
		element->AddPropertyChangeHandler (property, handler, user_data);
}

void
BindingExpressionBase::DetachListener (PropertyChangeHandler handler)
{
	if (element && property && handler)
		element->RemovePropertyChangeHandler (property, handler);
}

Value *
BindingExpressionBase::GetValue ()
{
	if (element && property)
		return element->GetValue (property);
	
	return NULL;
}

void
BindingExpressionBase::UpdateSource (Value *value)
{
	
}
