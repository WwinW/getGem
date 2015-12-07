struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_ParticlesLegacy();
	RegisterModule_ParticlesLegacy();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 82 classes
	//0. AssetBundle
	void RegisterClass_AssetBundle();
	RegisterClass_AssetBundle();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//4. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//5. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//6. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//7. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//8. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//9. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//10. LineRenderer
	void RegisterClass_LineRenderer();
	RegisterClass_LineRenderer();

	//11. GUITexture
	void RegisterClass_GUITexture();
	RegisterClass_GUITexture();

	//12. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//13. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//14. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//15. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//16. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//17. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//18. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//19. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//20. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//21. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//22. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//23. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//24. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//25. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//26. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//27. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//28. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//29. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//30. ParticleEmitter
	void RegisterClass_ParticleEmitter();
	RegisterClass_ParticleEmitter();

	//31. ParticleAnimator
	void RegisterClass_ParticleAnimator();
	RegisterClass_ParticleAnimator();

	//32. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//33. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//34. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//35. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//36. BoxCollider2D
	void RegisterClass_BoxCollider2D();
	RegisterClass_BoxCollider2D();

	//37. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//38. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//39. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//40. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//41. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//42. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//43. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//44. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//45. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//46. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//47. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//48. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//49. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//50. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//51. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//52. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//53. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//54. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//55. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//56. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//57. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//58. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//59. ConstantForce
	void RegisterClass_ConstantForce();
	RegisterClass_ConstantForce();

	//60. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//61. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//62. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//63. PhysicMaterial
	void RegisterClass_PhysicMaterial();
	RegisterClass_PhysicMaterial();

	//64. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//65. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//66. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//67. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//68. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//69. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//70. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//71. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//72. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//73. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//74. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//75. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//76. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//77. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//78. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//79. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//80. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//81. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
