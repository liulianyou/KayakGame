template<class T>
T* FTriggerFactoryManager::FindOrCreateToolFactory()
{
	for (auto Factory : Factories)
	{
		if (Factory->GetClassName() == T::StaticClassName())
		{
			return static_cast<T*>(Factory);
		}
	}

	return CreateNewFactory<T>();
}

template<class T>
T* FTriggerFactoryManager::CreateNewFactory()
{
	check(T::StaticClassName());

	T* NewFactory = new T();

	NewFactory->InitlalizeTriggerTool();

	Factories.Add(NewFactory);

	return NewFactory;
}

template<class T>
void FTriggerFactoryManager::RemoveFactory()
{
	check(T::StaticClassName());

	for (int i = 0; i < Factories.Num(); i++)
	{
		if (Factories[i]->GetClassName() == T::StaticClassName())
		{
			Factories.RemoveAt(i);
			i--;
		}
	}
}