/*
* Viry3D
* Copyright 2014-2017 by Stack - stackos@qq.com
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#pragma once

#include "Component.h"
#include "math/Vector3.h"

namespace Viry3D
{
	class UILabel;
	class Camera;

	class DebugUI: public Component
	{
		DECLARE_COM_CLASS(DebugUI, Component);

	public:
		void OnResize(int width, int height);
		void SetCamera(const Ref<Camera>& camera);

	protected:
		virtual void Awake();
		virtual void Update();

	private:
		Ref<GameObject> m_ui;
		Vector3 m_window_menu_pos;
		Ref<UILabel> m_fps_text;
	};
}
